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

	if (str1 = NULL)
	{
		str1 = ''
	}
	if (str2 = NULL)
	{
		str2 = ''
	}
	while (*str1)
	{
		n = n + 1;
		str1 = str1 + 1;
	}
	str1 = str1 - n;
	while (*str2)
	{
		m = m + 1;
		str2 = str2 + 1;
	}
	str2 = str2 - m;
	new_str = maloc(sizeof(char) * (m + n + 1));
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
