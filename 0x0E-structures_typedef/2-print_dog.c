#include "dog.h"
#include <stdio.h>

/**
 * print_dog - dfjhpojbs'ojgosj
 *
 * @d: ihsiogjgd
 * Return: eighriphpr
*/
void print_dog(struct dog *d)
{
	if (d) /*ihselfhglslg*/
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
