#include<stdlib.h>

/**
 * array_range - a function that creates
 * an array of integers.
 *
 * @min: first value at the array
 * @max: last value at the array
 *
 * Return: the pointer to the newly
 * created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
