#include "main.h"

/**
 * puts_half - print the half of the string.
 *
 * @str: it is the string who we will print the half.
 * Return: nothing just printing the half.
 */

void puts_half(char *str)
{
	int i = 0,n = 0;

	while(str[i] != '\0')
	{
		n = n+1;
		i = i+1;
	}
	if (n%2==0)
	{
		for(i = n-1;i>=n/2;i--)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for(i = n-1;i >= ((n-1)/2))
		{
			_putchar(str[i]);
		}
	}
	_putchar("\n");
}
