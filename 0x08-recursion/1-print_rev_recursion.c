#include "main.h"

/**
 * _print_rev_recursion - prints a strung inverse.
 *
 * @s: the string.
 * Return: printing the string inverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}	
}
