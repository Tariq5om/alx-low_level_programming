#include "dog.h"
#include <stdio.h>

/**
 * new_dog - hhjghhhhfhh
 * @name: wtufchjjvv
 * @age: ptruhvgg
 * @owner: yftyyudchh
 * Return: good
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;/*Good*/

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
