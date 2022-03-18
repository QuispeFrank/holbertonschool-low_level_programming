#include "lists.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: ...
 * Return: returns the length of a string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 *
 * @head: head of the linked list
 * @str: needs to be duplicated
 * Return: a pointer to the last structure
 */

list_t *add_node(list_t **head, const char *str)
{
	/* creo el nodo */
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	/* validacion */
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}

	/* asigno valores y apunto al primer nodo */
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(node->str);
	node->next = *head;

	/* head apunta al nuevo nodo */
	*head = node;

	return (node);
}
