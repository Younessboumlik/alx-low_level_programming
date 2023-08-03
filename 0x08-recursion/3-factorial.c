#include "main.h"

/**
 * factorial - calculate the factoriel.
 *
 * @n: the number that we will calculate the factorial.
 * Return: the factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
