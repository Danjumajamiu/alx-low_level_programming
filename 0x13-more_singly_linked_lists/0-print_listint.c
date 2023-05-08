#include "lists.h"
#include <stdio.h>

/**
 * print_listint - will print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{

	size_t points = 0;

	while (h)
	{
		printf("%d\n", h->n);
		points++;
		h = h->next;
	}

	return (points);
}
