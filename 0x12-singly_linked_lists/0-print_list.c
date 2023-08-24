#include "lists.h"

/**
 * print_list - print elements of the list.
 *
 * @h: a list_t variable.
 * Return: the numbre of nodes.
 */

size_t print_list(const list_t *h)
{
	int j = 0;

	if ((h -> str) == NULL)
	{
		printf("[0] (nil)\n");
		j = j + 1;
		h = h -> next;
	}
	while (h -> next != NULL)
	{
		j = j + 1;
		printf("[%d] %s\n", h -> len, h -> str);
		h = h -> next;
	}
	j = j + 1;
	printf("[%d] %s\n", h -> len, h -> str);
	return (j);
}
