#include "hash_tables.h"

/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 * @head: A pointer to the list_t list.
 * @key: the key of the node.
 * Return: the nth node of a listint_t linked list.
 */

hash_node_t *get_nodeint_at_index(hash_node_t **head, const char *key)
{
	hash_node_t *tmp;

	if (!head)
		return (NULL);

	/* busqueda del key*/
	tmp = *head;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp);
		}
		tmp = tmp->next;
	}

	return (NULL);
}



/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into .
 * @key: key you are looking for
 * Return:  the value associated with the element
 * or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = get_nodeint_at_index(&(ht->array[index]), key);

	if (node == NULL)
		return (NULL);
	return (node->value);
}
