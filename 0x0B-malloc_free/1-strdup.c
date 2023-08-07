#include "main.h"

/**
 * _strdup - copy an integer using malloc function.
 *
 * @str: the string giving bu the user.
 * Return: a pointer in the copy of the string.
 */

char *_strdup(char *str)
{
	char *new_str;
	int n = 0,i = 0;

	while(*str)
	{
		n = n + 1;
		str = str + 1;
	}
	str = str - n;
	new_str = malloc(sizeof(char)*n);
	if ((str == NULL) || (new_str == NULL))
	{
		return (NULL);
	}
	else
	{
		for (; i < n; i++)
		{
			new_str[i] = str[i];
		}
	}
	return (new_str);
}
