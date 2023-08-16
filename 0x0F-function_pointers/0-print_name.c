#include "function_pointers.h"

/**
 * print_name - print a name.
 *
 * @name: the name that we should print.
 * @f: a pointer that point in a function with a char argument and without output.
 * Return: nothing.
 */

void print(char *name)
{
	while(*name)
	{
		_putchar(*(name));
		name = name + 1;
	}
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
