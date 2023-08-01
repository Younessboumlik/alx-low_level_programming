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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

				return (NULL);
}
