#include "lists.h"

/**
 * add_node - add a node
 *
 * @head: the pointer to head
 * @str: pointer to string
 * Return: the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (!p || !head)
		return (NULL);
	p->str = strdup(str);
	if (p->str == NULL)
		return (NULL);
	p->len = strlen(str);
	p->next = *head;
	*head = p;
	return (*head);
}
