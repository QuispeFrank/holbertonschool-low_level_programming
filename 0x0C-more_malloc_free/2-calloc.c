#include<stdlib.h>

/**
 * _calloc - a function that allocates
 * memory for an array, using malloc.
 *
 * @nmemb: elements of the array.
 * @size: size of each element in bytes.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int lens, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	lens = nmemb * size;
	ptr = malloc(lens);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lens; i++)
		ptr[i] = 0;

	return (ptr);
}
