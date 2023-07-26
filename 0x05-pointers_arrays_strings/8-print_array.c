#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements.
 *
 * @a: the array of integres.
 * @n: the number of elements.
 * Return: printing n elements of a
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
