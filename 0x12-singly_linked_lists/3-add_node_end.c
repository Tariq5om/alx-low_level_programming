#include "lists.h"


/**
 * add_node_end - add a node at the end
 *
 * @head: the pointer to head
 * @str: pointer to string
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p1, *p2;

	if (!head)
		return (NULL);
	p1 = *head;
	for (; *head && p1->next; p1 = p1->next)
		;
	p2 = malloc(sizeof(list_t));
	if (!p2)
		return (NULL);
	p2->str = strdup(str);
	if (p2->str == NULL)
	{
		free(p2);
		return (NULL);
	}
	p2->len = strlen(str);
	p2->next = NULL;
	if (!*head)
		*head = p2;
	else
		p1->next = p2;
	return (p2);
}
