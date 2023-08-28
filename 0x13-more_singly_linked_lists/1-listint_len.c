#include "lists.h"

/**
 * listint_len - number of linked lists.
 *
 * @h: the linked list.
 * Return: the number of linked lists.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
