#include "main.h"

/* reverse_array - reverse an array
 *
 * @a: the array of integers.
 * @n: the number of the elements in the array.
 * Return: the array but reversed.
 */

void reverse_array(int *a, int n)
{
	int b[n],i,j;


	for ((i = n - 1) && (j = 0); (i >= 0) && (j <= n-1) ; (i--) && (j++))
	{
		*(b + j)=(a + i);
	}
	return (b);
}
