#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list.
 *
 * @h: Pointer to struct
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
        list_t *p;
        size_t i;
        p = (list_t *)h;/*Because h is const*/
        for (i = 0; p; i++, p = (p->next))
		;
        return (i);
}
