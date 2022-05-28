#include "hash_tables.h"

/**
 * hash_table_delete - w
 * @ht: table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	int index = 0;
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;

	for (; index < (int)ht->size; index++)
	{
		node = ht->array[index];
		/* node at index not null */
		while (node != NULL)
		{
			tmp = node;
			node = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
