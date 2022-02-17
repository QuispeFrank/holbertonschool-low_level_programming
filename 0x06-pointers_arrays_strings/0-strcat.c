#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: write your text copied
 * @src: where from copy
 *
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{

	int n_elem_src = 0, n_elem_dest = 0;
	int j;


	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}

	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}

	for (j = 0; j <= n_elem_src; j++)
	{
		dest[n_elem_dest + j] = src[j];
	}

	return (dest);
}
