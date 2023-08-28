#include "lists.h"

/**
 * sum_listint - the sum of all the data.
 *
 * @head: the head if the list.
 * Return: the sum of data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
