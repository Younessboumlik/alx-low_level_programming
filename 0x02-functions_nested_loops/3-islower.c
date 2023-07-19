#include "main.h"

/**
 * _islower-check if number is lower.
 * @c: is the char who we will check.
 *Return: 1 or 0 in different case.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
