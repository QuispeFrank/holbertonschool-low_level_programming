#include "lists.h"
/**
 * reverse_listint - a pointer to the first
 * node of the reversed list.
 *
 * @head: a pointer to the head of the single
 * linked list.
 *
 * Return: a pointer to the first node of
 * the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pprev = NULL;
	listint_t *pnext = NULL;

	/* validacion del head */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* caso un solo nodo */
	if ((*head)->next == NULL)
		return (*head);

	/* mas de un nodo */
	pnext = (*head)->next;
	(*head)->next = NULL;

	while (pnext)
	{
		pprev = (*head);
		(*head) = pnext;
		pnext = (*head)->next;
		(*head)->next = pprev;
	}

	return (*head);
}
