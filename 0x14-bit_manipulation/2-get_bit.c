#include <stdio.h>
#include "main.h"
/**
 * get_bit - give you a bit.
 *
 * @n: an integer.
 * @index: the index.
 * Return: the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((n >> index) & 1);
}
