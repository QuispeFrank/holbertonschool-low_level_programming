#include "hash_tables.h"

/**
  * ad_no_nd - function that adds a new node
  * at the beginning of a list_t list
  * @head: head of the linked list
  * @key: needs to be duplicated
  * @value: needs to be duplicated
  * Return: the address of the new element, or NULL if it failed
  */

hash_node_t *ad_no_nd(hash_node_t **head, const char *key, const char *value)
{
	/* creating the last nodo */
	hash_node_t *node_beg = malloc(sizeof(hash_node_t));
	hash_node_t *tmp;


	/* validation */
	if (node_beg == NULL)
		return (NULL);

	/* busqueda del key*/
	tmp = *head;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free(node_beg);
			return (tmp);
		}
		tmp = tmp->next;
	}

	node_beg->key =  malloc(sizeof(char) * strlen(key));
	if (node_beg->key == NULL)
	{
		free(node_beg);
		return (NULL);
	}
	node_beg->value = malloc(sizeof(char) * strlen(value));

	node_beg->key = strcpy(node_beg->key, key);
	node_beg->value = strcpy(node_beg->value, value);

	node_beg->next = *head;
	*head = node_beg;
	return (node_beg);
}


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: array.
 * @key: key value.
 * @value: value.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = ad_no_nd(&(ht->array[index]), key, value);
	if (node == NULL)
		return (0);
	else
		return (1);
}
