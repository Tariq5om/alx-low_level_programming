#include "dog.h"

/**
 * free_dog - jbflfsfidskfdf
 *
 * @d: sfjslbrlgldsf
 * Return:hkd
*/
void free_dog(dog_t *d)
{
	if (d) /*ihf;hdfa;gohe*/
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
