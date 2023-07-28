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
	int n = 0,m = 0;
	char *res;

	while (*src != "\0")
	{
		*res=*src;
		res=res+1;
		src=src+1;
	}
	while (*dest != "\0")
	{
		*src=*src+*des;
		src=src+1;
		dest=dest+1;
	}
	return (src);
	
}
