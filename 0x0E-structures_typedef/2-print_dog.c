#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  print it
 *
 * @d: the fog
 * Return: return it
*/
void print_dog(struct dog *d)
{
	if (d) /*otdderfgcvvv*/
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
