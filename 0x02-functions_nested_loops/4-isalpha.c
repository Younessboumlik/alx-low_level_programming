#include "main.h"

/**
 * _isalpha-check if number is lower or upper.
 * @c: is the char who we will check.
 * Return: 1 or 0 in different case.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
