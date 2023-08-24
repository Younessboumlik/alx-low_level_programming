#include "lists.h"


/**
 * list_len - number of elements in a list.
 *
 * @h: a list variable.
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
