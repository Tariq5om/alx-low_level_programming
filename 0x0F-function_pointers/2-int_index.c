#include "function_pointers.h"

/**
 * int_index - return index
 *
 * @array: the array
 * @size: the size
 * @cmp: call
 * Return: the index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == 0)
				return (i);
		}
	}
	return (-1);
}
