#include "main.h"

/**
 * *create_array - create an array of char.
 *
 * @size: the size of the array.
 * @c: the char that we will put in the array.
 * Return: The pointer, or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *table;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		table = malloc(sizeof(char) * (size));
		for (i = 0; i < size; i++)
		{
			table[i] = c;
		}
	}
	return table;
}
