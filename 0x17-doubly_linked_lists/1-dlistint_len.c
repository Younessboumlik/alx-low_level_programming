#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - the number of elements.
 *
 * @h: a linked list.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
