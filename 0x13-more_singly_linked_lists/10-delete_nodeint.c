#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the head pointer
 * @index: the index of node
 * Return: 1 (succeeded), -1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **p, *pn;

	p = head;
	for (; p && *p && index > 0; index--)
		p = &((*p)->next);
	if (index > 0 || !p || !(*p))
		return (-1);
	pn = (*head)->next;
	free(*head);
	(*head) = pn;
	return (1);
}
