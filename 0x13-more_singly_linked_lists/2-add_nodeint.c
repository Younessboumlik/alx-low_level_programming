#include "lists.h"

/**
 * add_nodeint - add node in the beginning.
 *
 * @head: the head of the linked list.
 * @n: the value of the new header.
 * Return: the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}
