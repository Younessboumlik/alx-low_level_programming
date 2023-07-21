#include "main.h"

/**
 * print_numbers - print from 0 to 9.
 *
 * Return: 0123456789
 */

void print_numbers(void)
{
	char i;

	for(i = '0';i <= '9';i++)
	{
		_putchar(i);
	}
	_putchar('/n');

}
