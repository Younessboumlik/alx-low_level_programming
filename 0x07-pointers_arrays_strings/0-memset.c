#include "main.h"

/**
 * *_memset - fills first n bytes.
 *
 * @s: the pointer of a char.
 * @b: the char that we will remplace in s with n bites.
 * @n: number of bits.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i=n;i>0;i--)
	{
		s[n-i]=b;
	}
	return (s);
}
