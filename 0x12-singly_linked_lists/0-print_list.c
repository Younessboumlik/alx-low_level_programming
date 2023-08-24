#include "lists.h"

/**
 * print_list - print elements of the list.
 *
 * @h: a list_t variable.
 * Return: the numbre of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		j++;
	}
	return (j);
}

