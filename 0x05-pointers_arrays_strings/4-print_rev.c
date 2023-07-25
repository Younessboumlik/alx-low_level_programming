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
	char *p=s
	int i=0;

	while (*s != '\0')
	{
		s=s+1;
		n=n+1;
	}
	for (i = 0; i<n;i++)
	{
	*(p+i)=*(s+n-1-i);
	}
}
