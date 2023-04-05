#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the beginning of the list
 * @index: index of the node to be returned
 *
 * This function returns a pointer to the nth node of the linked list pointed
 * to by head. The index of the first node is 0.
 *
 * Return: If the list is shorter than the specified index,
 * the function returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
