#include "main.h"

/**
 * _strcat - string after a string.
 *
 * @dest: string.
 * @src: string.
 * Return: string with the two strings.
 */

char *_strcat(char *dest, char *src)
{
	int n = 0,m =0;
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest=dest+1;
	}
	
	while (*src != '\0')
	{
		*dest=*src;
		src=src+1;
		dest=dest+1;
	}

	return (original_dest);
}
