#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - free the list.
 *
 * @head: the head of the list.
 * Return: nohing.
 */


void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
