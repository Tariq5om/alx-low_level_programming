#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - new dog
 *
 * @name: name of it
 * @age:  age of it
 * @owner: owner
*/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*odhfohdsf*/
