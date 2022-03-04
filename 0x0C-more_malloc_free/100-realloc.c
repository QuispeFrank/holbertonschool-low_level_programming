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
	int *p = ptr;
	unsigned int i;
	int *new_ptr = NULL;
	unsigned int size_to_copy;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		size_to_copy = old_size;
	else
		size_to_copy = new_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
	for (i = 0; i < size_to_copy; i++)
		new_ptr[i] = p[i];
	free(ptr);
	return (new_ptr);
}
