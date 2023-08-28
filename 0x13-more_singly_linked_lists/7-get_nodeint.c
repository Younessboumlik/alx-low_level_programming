#include "lists.h"

/**
 * get_nodeint_at_index - give the node with specific index.
 *
 * @head: the head of the list.
 * @index: the index of the node.
 * Return: the given node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
		{
			return (head);
		}
		j = j + 1;
		head = head->next;
	}
	return (NULL);
}
