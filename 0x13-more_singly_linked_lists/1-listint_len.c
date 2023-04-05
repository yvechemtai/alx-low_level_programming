#include <stdio.h>

#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
        size_t nodes = 0;

        while (h)
        {
                nodes++;
                h = h->next;
        }

        return (nodes);
}
