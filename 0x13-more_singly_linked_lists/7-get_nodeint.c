#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns the nth
 * node of a listint_t linked list.
 *
 * @head: a pointer to the head of the single
 * linked list.
 * @index: the index of the node.
 * Return: @n data.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;

	/* validacion de nodos nulos */
	if (!head)
		return (NULL);
	/* si solo existe un nodo */
	if (!index)
		return (head);

	node = head;
	/* si existen mas nodos */
	while (index--)
	{
		if (!node)
			break;
		node = node->next;
	}
	return (node);
}
