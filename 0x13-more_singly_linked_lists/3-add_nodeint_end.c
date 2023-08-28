#include "lists.h"

/**
 * add_nodeint_end - add a node in the end.
 *
 * @head: the head of the list.
 * @n: the value of the new node.
 * Return: the addres of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *last = *head;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
	{
		*head = h;
		return (h);
	}
	while (last->next != NULL)
	{
		last = (last)->next;
	}
	(last)->next = h;
	return (h);
}
