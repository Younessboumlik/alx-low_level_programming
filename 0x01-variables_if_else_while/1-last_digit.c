#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and determines if it's positive,
 *              negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x=n%10;
	if ( x>5 )
	{
		printf("Last digit of %d is %d and is greater than 5 ", n, x);
	}
	else if ( x==0 )
	{
		printf("Last digit of %d is %d and is 0 ", n, x);
	}
	else if (x<6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 ", n, x);
	}
	
	return (0);
}
