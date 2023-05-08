#include "lists.h"

/**
 * listint_len - will return the number of elements in a linked lists
 * @h: A pointer to the head of the list_t list.
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t points = 0;

	while (h)
	{
		points++;
		h = h->next;
	}

	return (points);
}
