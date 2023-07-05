#include "lists.h"

/**
 * free_listint - frees a list of integers
 * @head: pointer to the beginning of the list
 *
 * This function iterates over the list starting at head, freeing each node
 * until the end of the list is reached. It does not return anything.
 *
 * Author: yve chemutai
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
