#include "function_pointers.h"

/**
 * int_index - return int that return 0 with cmp funct.
 *
 * @array: an array of integrs.
 * @size: the size of the array.
 * @cmp: the function that we will use to determine the int that we want.
 * Return: the integers that we shearch.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			
		}
		return (-1);
	}
}
