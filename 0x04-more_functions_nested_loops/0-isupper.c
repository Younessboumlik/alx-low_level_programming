#include "main.h"

/*
 * _isupper - if c is upper or not 
 * @c: is the input
 * Return: 1 or 0
 */

int _isupper(int c) 
{
	if ( (c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
