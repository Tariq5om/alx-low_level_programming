#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: Pointer to struct
 * Return: The nodes
*/
size_t print_list(const list_t *h)
{
	list_t *p;
	size_t i;

	p = (list_t *)h;
	i = 0;
	if (h)
	{
		for (;;)
		{
			if (!p->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", p->len, p->str);
			i++;
			if (!p->next)
				break;
			p = (p->next);
		}
	}
	return (i);
}
