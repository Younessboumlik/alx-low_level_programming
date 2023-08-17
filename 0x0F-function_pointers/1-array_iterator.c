#include "function_pointers.h"

/**
 * array_iterator - execute a function in an array.
 *
 * @array: array of integers.
 * @size: the size of the array.
 * @action: the function we need to use.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(*(array+i));
	}
}
