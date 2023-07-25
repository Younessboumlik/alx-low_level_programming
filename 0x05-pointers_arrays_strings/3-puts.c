#include "main.h"

/** 
 * _puts - print with a new line.
 *
 * @str: the string that we should print.
 * Return: The string with new line.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}		
	_putchar('\n');
}
