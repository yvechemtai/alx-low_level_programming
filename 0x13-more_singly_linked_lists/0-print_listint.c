#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint
 * return: number of nodes in list_t list
 *
 * Author: Yvonne Chemtai
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
