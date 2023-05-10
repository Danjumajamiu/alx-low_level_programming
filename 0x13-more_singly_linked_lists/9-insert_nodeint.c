#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - will insert a new node at a given postion
 * @head: Pointer to the first node of the list
 * @idx: Index of the list where the new node should be added
 * @n: new node value
 *
 * Return: Integer value to be stored in the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (a = 0; a < idx - 1; a++)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
