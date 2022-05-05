#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a
 * dlistint_t linked list.
 *
 * @head: header of the double linked list.
 *
 * Return: node at @index or NULL if it doesn't exist.
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	if (head != NULL && head->next != NULL)
		return (head->n + sum_dlistint(head->next));
	return (head->n);
}
