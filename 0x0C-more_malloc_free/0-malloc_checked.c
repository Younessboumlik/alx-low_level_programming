#include "main.h"

/**
 * malloc_checked - allocate the memory using malloc.
 *
 * @b: the number of byets.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
}
