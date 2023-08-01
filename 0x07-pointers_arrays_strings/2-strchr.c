#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character.
 *
 * @s: the source.
 * @c: the character.
 * Return: the pointer in c.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}
	return NULL;
}
