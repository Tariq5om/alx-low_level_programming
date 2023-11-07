#include "dog.h"

/**
 * free_dog - free a vaiable
 *
 * @d: sifftuuvvh
 * Return: the freed
*/
void free_dog(dog_t *d)
{
	if (d) /*check if it goode*/
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
