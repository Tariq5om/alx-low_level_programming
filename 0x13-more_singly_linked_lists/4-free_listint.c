#include "lists.h"

/**
 * free_listint - frees a list_t list
 *
 * @head: The head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	list_t *p1, *p2;

	for (p1 = head; p1; p1 = p2)
	{
		p2 = p1->next;
		free(p1);
		p1 = p2;
	}
}
