#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to head
 * @idx: the index of the list where the new node
 * @n: the value in the node
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t **p, *mp;

	mp = malloc(sizeof(listint_t));
	if (!mp)
		return (NULL);
	mp->n = n;
	p = head;
	for (; p && *p && (idx > 0); idx--)
		p = &((*p)->next);
	if (idx > 0 || !p)
	{
		free(mp);
		return (NULL);
	}
	mp->next = *p;
	*p = mp;
	return (mp);
}
