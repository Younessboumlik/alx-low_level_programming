#include "main.h"

/* _puts_recursion - print a string.
 *
 * @s: the string that we should print.
 * Retur: print the string using _putchar.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s);
		s=s+1;
		_puts_recursion(s);
	}
}
