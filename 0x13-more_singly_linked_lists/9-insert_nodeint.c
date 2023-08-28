#include "lists.h"
/**
 * insert_nodeint_at_index - inserting node in index.
 *
 * @head: the head of the list.
 * @idx: the index where we should add the new node.
 * @n: the data of the new node.
 * Return: the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node)
	{
		if (j == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		j++;
		current_node = current_node->next;
	}

	free(new_node);
	return (NULL);
}
