#include<stdlib.h>

/**
 * _calloc - function that concatenates.
 *
 * @nmemb: elements of the array.
 * @size: size of each element in bytes.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int lens, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	lens = nmemb * size;
	ptr = malloc(lens);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= lens; i++)
		ptr[i] = '0';

	return (ptr);
}
