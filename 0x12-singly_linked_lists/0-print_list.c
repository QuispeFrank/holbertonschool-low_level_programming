#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to first element of the linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr = h;

	for (; ptr != NULL; counter++)
	{
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (counter);
}
