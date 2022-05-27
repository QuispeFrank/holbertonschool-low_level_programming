#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size is the size of the array.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	/* valor no nulo */
	if (size == 0)
		return (NULL);

	/* se crea la estructura */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* asigna el tamaño */
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
