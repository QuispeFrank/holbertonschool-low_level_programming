#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string.
 *
 * Return: string length value.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copy content between strings:
 * src -> dest.
 *
 * @dest: pointer to string where to paste to.
 * @src: pointer to string that contains the original text.
 *
 * Return: @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}


/**
 * new_dog - a function that creates a new dog.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: owner of the dog.
 *
 * Return: a pointer to the new dog created.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *zeus_ptr = NULL;

	/* allocating memory for my dog structure */
	zeus_ptr = malloc(sizeof(dog_t));
	if (zeus_ptr == NULL)
		return (NULL);

	/* allocating memory for my dog's name&owner */
	zeus_ptr->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (zeus_ptr->name == NULL)
	{
		free(zeus_ptr);
		return (NULL);
	}
	zeus_ptr->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (zeus_ptr->owner == NULL)
	{
		free(zeus_ptr->name);
		free(zeus_ptr);
		return (NULL);
	}

	/* filling the zeus data */
	zeus_ptr->name = _strcpy(zeus_ptr->name, name);
	zeus_ptr->age = age;
	zeus_ptr->owner = _strcpy(zeus_ptr->owner, owner);

	return (zeus_ptr);

}
