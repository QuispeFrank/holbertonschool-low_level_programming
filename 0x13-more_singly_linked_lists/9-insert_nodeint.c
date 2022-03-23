#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @head: a pointer to the head of the single
 * linked list. *
 * @idx: the index of the list where the new node
 * should be added.
 * @n: data.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *node;

	/* validacion head */
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	/* creacion y validacion del nuevo nodo */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	ptr = *head;

	/* si el indice a cambiar es el head */
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	/* asignacion */
	while (--idx)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
