#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to 2 dimensional
 *
 * @width: the width
 * @height: the height of tge array
 * Return: 2 dimensional
*/
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = malloc(sizeof(int *) * height);/*The stick*/
	if (width <= 0 || height <= 0 || p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)/*The rest*/
	{
		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
