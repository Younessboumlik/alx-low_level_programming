#include "lists.h"

/**
 * add_node - add a node in the head of the linked list.
 *
 * @head: a pointer to the linked lists.
 * @str: the string value.
 * Return: a pointer to the new head.
 */

list_t *add_node(list_t **head, const char *str)
{
	int j = 0;
	list_t *ptr;
	const char *tem = str;

	while (*tem)
	{
		j = j + 1;
		tem = tem + 1;
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = j;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
