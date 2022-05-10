#include "main.h"

/**
 * *_strncpy - function that concatenates two strings.
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: number of elements to be concatenated.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int n_elem_src = 0, n_elem_dest = 0;
	int j, limit;

	/* counting arrays */
	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}

	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}

	/* setting the limit to n elements */
	if (n < n_elem_src)
		limit = n;
	else
		limit = n_elem_src;

	/*concatenating */
	for (j = 0; j < limit; j++)
	{
		dest[j] = src[j];
	}

	while (n_elem_src < n)
	{
		dest[n_elem_src] = '\0';
		n_elem_src++;
	}

	return (dest);
}
