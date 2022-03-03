#include<stdlib.h>

/**
 * malloc_checked - a function that
 * allocates memory using malloc
 *
 * @b: size of allocate
 *
 * Return: 98 - if the program crashes
 * a pointer to the allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
