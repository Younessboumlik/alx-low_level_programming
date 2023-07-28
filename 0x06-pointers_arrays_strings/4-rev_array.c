#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @a: the array of integers.
 * @n: the number of the elements in the array.
 * Return: the array but reversed.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
