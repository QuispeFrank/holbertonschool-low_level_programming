#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a
 * dlistint_t list.
 *
 * @head: header pointer of the double linked list.
 * @n: value in a node.
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (ptr != NULL && ptr->next != NULL)
		ptr = ptr->next;

	new_node->n = n;
	new_node->prev = ptr;
	if (ptr != NULL)
		ptr->next = new_node;
	else
		(*head) = new_node;
	return (new_node);
}
