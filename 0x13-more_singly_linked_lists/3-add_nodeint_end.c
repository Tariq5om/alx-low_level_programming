#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end
 *
 * @head: The head of a linked list
 * @n: The number
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p2, *p1;

	if (!head)
		return (NULL);
	for (p1 = *head; *head && p1->next; p1 = p1->next)
		;
	p2 = malloc(sizeof(listint_t));
	if (!p2)
		return (NULL);
	p2->n = (int)n;
	p2->next = NULL;
	if (!*head)
		*head = p2;
	else
		p1->next = p2;
	return (p2);
}
