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
  * add_node_end - function that adds a new node
  * at the beginning of a list_t list
  * @head: head of the linked list
  * @str: needs to be duplicated
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	/* creating the last nodo */
	list_t *last_node = malloc(sizeof(list_t));
	list_t *ptr;

	/* validation */
	if (last_node == NULL)
		return (NULL);
	ptr = *head;
	if (*head == NULL)
		*head = last_node;
	else
	{
		/*finding the last Node*/
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;
	}
	/* adding values to node->str */
	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->len = _strlen(last_node->str);
	last_node->next = NULL;
	return (last_node);
}
