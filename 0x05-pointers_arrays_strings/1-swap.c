#include "main.h"

/**
 * swap_int - swaps two values.
 *
 * @a: the first value.
 * @b: the second value.
 * Return: nothing lol.
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
