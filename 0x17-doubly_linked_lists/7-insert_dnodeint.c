#include "lists.h"

/**
 * dlistint_len -  counts the number of
 * elements in a linked dlistint_t list.
 *
 * @h: header of the double linked list.
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t counter = 0;

	while (ptr != NULL)
	{
	counter++;
	ptr = ptr->next;
	}
	return (counter);
}


/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list.
 *
 * @head: header of the double linked list.
 * @index: is the index of the node, starting from 0.
 *
 * Return: node at @index or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head != NULL && index; index--)
		head = head->next;
	return (head);
}


/**
 * insert_dnodeint_at_index - sum of all the data (n) of a
 * dlistint_t linked list.
 *
 * @h: header of the double linked list.
 * @idx: index for the new node.
 * @n: value for the new node.
 *
 * Return:the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *ptr_prev = NULL;
	dlistint_t *new_node = NULL;

	/* inicio y final */
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* intermedios */
	ptr_prev = ptr->prev;
	new_node->next = ptr;
	new_node->prev = ptr_prev;
	ptr->prev = ptr_prev;
	ptr_prev->next = new_node;
	return (new_node);
}
