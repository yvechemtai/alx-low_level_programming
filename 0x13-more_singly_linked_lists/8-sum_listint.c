#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a linked list
 * @head: pointer to the beginning of the list
 *
 * This function takes a pointer to the head of a linked list of integers and
 * computes the sum of all the data (n) in the linked list.
 *   The function returns the sum of the data.
 *
 * Return: If the linked list is empty, the function returns 0.
 *
 * Author: yve chemtai
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

