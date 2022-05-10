#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: A pointer to array of chars where to copy
 * @src: A pointer to array of chars where from copy
 * @n: number of chars that will be copied
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
