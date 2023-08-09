#include "main.h"

/**
 * argstostr - concatenates the arguments/
 *
 * @ac: an integer.
 * @av: a pointer that point in a pointer that point in a char.
 * Return: the two arguments concatenainting.
 */

char *argstostr(int ac, char **av)
{
	int i, total_length = 0, current_position = 0;
	char *result;

	if ((ac == 0) || (av ==NULL))
	{
		return (NULL);
	}
	*result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL) 
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++) 
	{
		strcpy(result + current_position, av[i]);
		current_position = strlen(av[i]) + current_position;
		result[current_position++] = '\n';
	}
	return (result);
}
