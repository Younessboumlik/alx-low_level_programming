#include "main.h"

/**
 * alloc_grid - return a pointer to a two demensional array of integers.
 *
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: a pointer in that array.
 */

int **alloc_grid(int width, int height)
{
	int i, j, **tab1;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}
	tab1 = malloc(sizeof(int) * height);
	
	for(i = 0; i < height; i++)
	{
		tab1[i] = (int *)malloc(sizeof(int) * width);
	}
	if (tab1 == NULL)
	{
		return NULL;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab1[i][j] = 0;
		}
	}
	return (tab1);
}
