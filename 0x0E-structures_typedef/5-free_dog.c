#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d: The dog to be freed.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	/* frees name&owner&d */
	free(d->name);
	free(d->owner);
	free(d);
}
