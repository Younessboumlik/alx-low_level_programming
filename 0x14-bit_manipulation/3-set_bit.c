#include "main.h"

/**
 * set_bit - the value of a bit to 1.
 * @index: the index.
 * @n: pointer number.
 * Return: 1 if it worked, or -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
