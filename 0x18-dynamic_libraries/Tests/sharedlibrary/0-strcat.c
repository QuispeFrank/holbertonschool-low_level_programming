#include "main.h"

/**
 * *_strcat - Function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{

	int n_elem_src = 0, n_elem_dest = 0;
	int j;

	/*counting arrays*/
	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}

	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}

	/*printing it*/
	for (j = 0; j <= n_elem_src; j++)
	{
		dest[n_elem_dest + j] = src[j];
	}

	return (dest);
}
