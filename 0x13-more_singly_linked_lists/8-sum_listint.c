#include "lists.h"

/**
 * sum_listint - Return the sum of all the data (n)
 *
 * @head: The head pointer
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum;

	p = head;
	for (sum = 0; p; p = p->next)
		sum += p->n;
	return (sum);
}
