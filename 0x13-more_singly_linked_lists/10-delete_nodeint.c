#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node from an index.
 *
 * @head: the head of the list.
 * @index: the index of the node that we will delete.
 * Return: if the deletation was done or not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int j = 0;

	if ((head == NULL) || (*head == NULL))
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (j == (index - 1))
		{
			temp = node->next;
			if (temp != NULL)
			{
				node->next = temp->next;
				free(temp);
				return (1);
			}
			else
				return (-1);
		}
		j++;
		node = node->next;
	}
	return (-1);
}
