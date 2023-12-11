#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list.
 *
 * @h: Pointer to struct
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	return ((sizeof(list_t) / sizeof(h)) - 1);
}