#include "main.h"

/**
 * _strlen - the lengh of a string.
 *
 * @s: the string.
 * Return: it return the lengh of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	return (i);	
}
