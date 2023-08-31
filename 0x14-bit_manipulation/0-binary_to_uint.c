#include "main.h"

/**
 * binary_to_uint - convert binary to int.
 *
 * @b: the binary number.
 * Return: an unsigned int.
 */
unsigned int power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, j = 0, n = 0;
	const char *a;

	a = b;
	if (b == NULL)
	{
		return (0);
	}
	while (*a)
	{
		n = n + 1;
		a = a + 1;
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result +((*b) - '0') * power(2,(n-j-1)) ;
		j = j + 1;
		b = b + 1;
	}
	return (result);
}
