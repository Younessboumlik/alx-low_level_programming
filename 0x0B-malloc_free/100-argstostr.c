#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates the arguments.
 *
 * @ac: number of arguments.
 * @av: array of argument strings.
 * Return: the concatenated string or NULL if an error occurs.
 */

char *argstostr(int ac, char **av)
{
	int i, total_length = 0, current_position = 0;
	char *result;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position++] = '\n';
	}
	result[current_position] = '\0'
	return (result);
}
