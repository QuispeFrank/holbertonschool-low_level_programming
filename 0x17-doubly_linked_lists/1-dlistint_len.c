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
