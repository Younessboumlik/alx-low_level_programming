#include "main.h"
#include <stdio.h>

/*
 * print_sign-just print the signe of number.
 * @n:it is the number.
 * Return:depend on the sign of n.
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
