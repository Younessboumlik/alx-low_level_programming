#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * *this program just show youb if the number is positive , negative or equal to zero.
 * * it is easy using the if statements , easy.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n==0)
        {
                printf("%d is zero\n", n);
	}
	else
	{
                printf("%d is negative\n", n);
        }
	return (0);
}
