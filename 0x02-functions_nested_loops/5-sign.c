#include "main.h"
#include <stdio.h>

/*
 * print_sign - just print the signe of number.
 * @n:it is the number.
 * Return:depend on the sign of n.
 */


int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf("0");
	}
	else
	{
		return (-1);
		printf("-");
	}
}
