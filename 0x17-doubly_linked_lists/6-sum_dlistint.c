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
	int suma = 0;

	while (head != NULL)
	{
		suma = suma + (head->n);
		head = head->next;
	}
	return (suma);
}
