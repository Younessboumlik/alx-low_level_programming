#include "variadic_functions.h"

/**
 * print_numbers - print numbers folowing with a new line.
 *
 * @separator: a string we will use to separate strings.
 * @n: nummber of args.
 * Return: nothing.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
