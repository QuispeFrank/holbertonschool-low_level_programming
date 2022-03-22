#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a list_t list
 * @head: head of the linked list
 * @n: data type int
 * Return:  the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* creo el nodo */
	listint_t *node = malloc(sizeof(listint_t));
	/* validation */
	if (!node)
		return (NULL);
	node->next = *head;

	if (*head == NULL)
		node->next = NULL;

	*head = node;
	node->n = n;

	return (node);
}
