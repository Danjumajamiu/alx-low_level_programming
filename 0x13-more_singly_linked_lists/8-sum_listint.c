#include "lists.h"
/**
 * sum_listint - will return the sum of all the data (n) of a linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		add += current->n;
		current = current->next;
	}

	return (add);
}

