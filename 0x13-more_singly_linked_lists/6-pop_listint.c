#include "lists.h"

/**
 * pop_listint - delete the header node.
 *
 * @head: the head of the list.
 * Return: the n of the header.
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int m;

	if (head == NULL)
	{
		return (0);
	}
	m = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (m);
}
