#include "lists.h"

/**
 * listint_len - prints all elements of a listint_t list
 *
 * @h: The head
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *p;
	size_t i;

	p = (listint_t *)h;
	for (i = 0; p; p = p->next, i++)
		;
	return (i);
}
