#include "main.h"

/**
 * str_concat - put str1 after str2.
 *
 * @str1: the first string.
 * @str2: the second string.
 * Return: a pointer on a new sting that concatenates the two strings.
 */

char *str_concat(char *s1, char *s2)
{
	int n=0, m=0, i=0;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*s1)
	{
		n = n + 1;
		s1 = s1 + 1;
	}
	s1 = s1 - n;
	while (*s2)
	{
		m = m + 1;
		s2 = s2 + 1;
	}
	s2 = s2 - m;
	new_str = malloc(sizeof(char) * (m + n + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (; i < n + m + 1; i++)
	{
		if (i < n)
		{	
			new_str[i] = s1[i];
		}
		else
		{
			new_str[i]=s2[i - n];
		}
	}
	return (new_str);
}
