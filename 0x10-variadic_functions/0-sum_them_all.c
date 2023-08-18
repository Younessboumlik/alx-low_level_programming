#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of his parametrs.
 *
 * @n: number of args.
 * Return: the sum of all paramaters.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int sum = 0;
		unsigned int i = 0;
		va_list ptr;

		va_start(ptr, n);
		for (; i < n; i++)
		{
			sum = sum + var_arg(ptr, int);
		}
		va_end(ptr);
		return (sum);
	}
}
