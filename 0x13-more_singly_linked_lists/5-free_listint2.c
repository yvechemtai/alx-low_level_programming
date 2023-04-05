#include "lists.h"

/**
 * free_listint2 - frees a list of integers
 * @head: pointer to a pointer to the beginning of the list
 *
 * This function iterates over the list starting at *head, freeing each node
 * until the end of the list is reached. It sets *head to NULL after freeing
 * all nodes. If head is NULL, the function returns immediately.
 *
 * Author:yve chemtai
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}

