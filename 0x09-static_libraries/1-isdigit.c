#include "main.h"

/**
 *_isdigit - if c is digit
 *
 * @c: the digit
 * Return: 1 ou 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
