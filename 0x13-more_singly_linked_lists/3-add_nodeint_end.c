#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the beginning of a list_t list
 * @head: head of the linked list
 * @n: needs to be duplicated
 * Return: the address of the new element, or
 * NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* creating the last nodo */
	*last_node = malloc(sizeof(listint_t));

	listint_t *ptr;

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
	last_node->n = n;
	last_node->next = NULL;
	return (last_node);
}
