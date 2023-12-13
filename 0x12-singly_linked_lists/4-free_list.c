#include "lists.h"
/**
 * free_list - frees a list_t list
 *
 * @head: The head of the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p1, *p2;

	for (p1 = head; p1; p1 = p2)
	{
		p2 = p1->next;
		if (p1->str)
			free(p1->str);
		free(p1);
		p1 = p2;
	}
}
