#include "lists.h"
/**
 * sum_listint - a function that returns
 * the sum of all the data (n) of a listint_t
 * linked list
 *
 * @head: a pointer to the head of the single
 * linked list.
 * Return: all nodes data sum.
 */

int sum_listint(listint_t *head)
{
	int suma = 0;

	/* validacion lista vacia */
	if (!head)
		return (0);

	/* si head no es nulo */
	while (head)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);

}
