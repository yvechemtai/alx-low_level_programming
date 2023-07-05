#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a
 *                            linked list
 * @head: pointer to a pointer to the beginning of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value of the new node to be added
 *
 * This function takes a pointer to a pointer to the head of a linked list, an
 * index where the new node should be added, and the value of the new node to
 *          be added. If the index is 0, the new node is added at the
 *           beginning of the list.
 * If the index is greater than the number of nodes in the list, the function
 * returns NULL. Otherwise, the new node is inserted at the specified index and
 * the function returns a pointer to the new node.
 *
 * Return: If the linked list is empty, the function returns 0.
 *
 * Author: Yve Chemtai
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
