#include "lists.h"
/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list.
 *
 * @h: header of the double linked list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h = h->next, counter++)
		printf("%d\n", h->n);

	return (counter);
}
