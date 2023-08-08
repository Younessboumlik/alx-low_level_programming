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
	int i, j, **array, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return NULL;
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(array[k]);
			}
			free(array);
			return NULL;
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
