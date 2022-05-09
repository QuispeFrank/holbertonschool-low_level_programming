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
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 *
 * @head: header of the double linked list.
 * @index: index for the new node.
 *
 * Return: 1 in success otherwise 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *tmp = NULL;
	size_t len = dlistint_len(*head);

	if (*head == NULL || index >= len)
		return (-1);

	tmp = get_dnodeint_at_index(*head, index);
	if (tmp->prev == NULL)
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			*head = NULL;
			return (1);
		}
		(*head) = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	ptr = tmp->prev;
	ptr->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = ptr;
	free(tmp);
	return (1);
}
