#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: write your text copied
 * @src: where from copy
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index += 1;
	}
	dest[index] = '\0';
	return (dest);
}
