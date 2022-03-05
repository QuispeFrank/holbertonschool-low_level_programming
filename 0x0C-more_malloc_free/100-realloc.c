#include<stdlib.h>

/**
 * _realloc -  a function that reallocates a memory
 * block using malloc and free.
 *
 * @ptr: a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: old size of the allocated memory
 * @new_size: new size of the allocated memory
 *
 * Return: the pointer to the newly
 * created array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = ptr, *new_ptr = NULL;
	unsigned int i, size_to_copy;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	size_to_copy = new_size;
	if (new_size > old_size)
		size_to_copy = old_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size_to_copy; i++)
		new_ptr[i] = p[i];
	free(ptr);
	return (new_ptr);
}
