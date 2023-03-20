#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable type struct dog
 * @d: pointer
 * @name: pointer for dog name
 * @age: dog age
 * @owner: pointer for owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
