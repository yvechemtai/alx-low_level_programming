#include "lists.h"

/**
 * find_listint_loop - Reverses a listint_t linked list using a if/while loop.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 *         NULL if @head is NULL or if the list is empty.
 *
 * Description: This function takes a pointer to the head node of a
 *              linked list and reverses the order of the nodes in the list.
 *              It does this by modifying the `next` pointers of the nodes.
 *              The new head node is the node that was previously at the end
 *              of the list.
 *
 * Author: Yve Chemtai
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
