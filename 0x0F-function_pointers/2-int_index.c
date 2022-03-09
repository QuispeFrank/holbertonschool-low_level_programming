#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: -1 if no matches found, the index position
 * of the number matched otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, catch = 0;

	/* argument validation */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		catch = cmp(array[i]);
		if (catch != 0)
			return (i);
	}
	/* no matches found */
	if (i == size)
		return (-1);

	return (-1);
}
