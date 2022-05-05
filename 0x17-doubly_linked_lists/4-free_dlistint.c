#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: header pointer of the double linked list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL && head->next != NULL)
		free_dlistint(head->next);
	free(head);
}
