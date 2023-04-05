#include "lists.h"

/**
 * pop_listint - removes the head node of a list and returns its data
 * @head: pointer to a pointer to the beginning of the list
 *
 * This function removes the head node of the list pointed to by *head and
 * returns the data (integer value) of the removed node.
 *
 * Return: If the list is empty, the function returns 0
 *
 * Author: yve chemtai
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
