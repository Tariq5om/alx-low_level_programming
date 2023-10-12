#include "function_pointers.h"

/**
 * array_iterator - execute function
 *
 * @array: the array
 * @size: the size
 * @action: a
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
