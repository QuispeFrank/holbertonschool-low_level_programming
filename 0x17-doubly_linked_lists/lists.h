#ifndef __DLINKlISTS__
#define __DLINKLISTS__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/******* functions */
/* 0 */	size_t print_dlistint(const dlistint_t *h);
/* 1 */	size_t dlistint_len(const dlistint_t *h); 		
/* 2 */	dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* 3 */	dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* 4 */	void free_dlistint(dlistint_t *head);
/* 5 */	dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/* 6 */	int sum_dlistint(dlistint_t *head);
/* 7 */	dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/* 8 */	int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
