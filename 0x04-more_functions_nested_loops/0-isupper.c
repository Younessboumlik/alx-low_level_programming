#include "main.h"

/*
 * Return-1 or 0 
 *@c: is the input
 *_isupper: if c is upper or not
 */

int _isupper(int c) 
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return(0);
}
