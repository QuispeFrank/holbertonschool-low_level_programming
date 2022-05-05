#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: header pointer of the double linked list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	if (ptr != NULL && ptr->next != NULL)
		free_dlistint(ptr->next);
	free(ptr);
}
