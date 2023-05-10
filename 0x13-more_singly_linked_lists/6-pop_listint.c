#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns its content.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 *
 * Return: The content of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int content;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	content = temp->n;
	*head = temp->next;
	free(temp);

	return (content);
}
