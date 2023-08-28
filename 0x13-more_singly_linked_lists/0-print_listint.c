#include "lists.h"

/**
 * print_listint - print a list of integers.
 *
 * @h: the list variable.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i = i + 1;
	}
	return (i);
}
