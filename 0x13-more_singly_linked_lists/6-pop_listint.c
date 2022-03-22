#include "lists.h"
/**
 * pop_listint -  a function that deletes the head
 * node of a listint_t linked list, and returns
 * the head node’s data (n).
 *
 * @head: a pointer to the head of the single
 * linked list.
 * Return: @n data.
 */

int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int dato;

	/* validacion de nodos nulos */
	if (*head == NULL)
		return (0);

	/* guardo el nodo */
	node = *head;

	dato = node->n;
	*head = node->next;
	free(node);

	return (dato);
}
