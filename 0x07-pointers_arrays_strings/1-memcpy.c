#include "main.h"

/**
 * *_memcpy - copy memory area.
 *
 * @dest: the destination.
 * @src: the source.
 * @n: the number of bites.
 */

*_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		dest[n - i] = src[n - i];
	}
	return (dest);
}
