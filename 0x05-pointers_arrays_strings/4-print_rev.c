#include "main.h"

/**
 * print_rev - reverse the string.
 *
 * @s: the input string
 * Return: print the string , but reversed.
 */

void print_rev(char *s)
{
	int n = 0;
	int i;
	int j=0;

	while (*s != '\0')
	{
		s=s+1;
		n=n+1;
	}

	char p[n];

	for (i = 0; i < n;i++)
	{
	*(p+i) = *(s+n-1-i);
	}
	while (p[j] != '\0')
	{
		_putchar(p[j]);
		j++;
	}
	_putchar('\n');
}
