#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  a function that initialize a variable of type
 * struct dog.
 *
 * @d: pointer to dog structure.
 * @name: name of the dog.
 * @age: age of dog.
 * @owner: owner of the dog.
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (0);
}
