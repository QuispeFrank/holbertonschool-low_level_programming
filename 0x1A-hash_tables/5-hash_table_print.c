#include "hash_tables.h"

/**
 * hash_table_print - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into .
 * Return:  the value associated with the element
 * or NULL if key couldn’t be found.
 */


void hash_table_print(const hash_table_t *ht)
{

	hash_node_t *tmp;
	unsigned long int index;
	int counter = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL && counter == 1)
			printf(", ");

		for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		{
			counter = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next)
			{
				printf(", ");
			}
		}
	}
	printf("}");
	printf("\n");
}
