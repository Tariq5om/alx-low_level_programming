#include "dog.h"
#include <stdio.h>

/**
 * new_dog - flghoihgairg
 *
 * @name: oubypvgr[afmocpe[]]
 * @age: 9bwuvn[aupgn]
 * @owner: yvb54wogsvo
 * Return:  h o8t8vngrc
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p->name = malloc(sizeof(*name));
	if (p->name == NULL)
		return (NULL);
	p->name = name;
	p->owner = malloc(sizeof(*owner));
	if (p->owner == NULL)
		return (NULL);
	p->owner = owner;
	p->age = age;
	return (p);/*ihfosdhfjdsl*/
}
