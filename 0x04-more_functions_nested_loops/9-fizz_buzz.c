#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 
 * Fizz for multiples of 3, Buzz for multiples of 5
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for(i = 0;i <= 100;i++)
	{
		if((i%3==0) && (i%5!=0))
		{
			print("Fizz ");
		}
		else if((i%5==0) && (i%3!=0) )
		{
			print("Buzz ");
		}
		else if((i%5==0) && (i%3==0) )
		{
			print("FizzBuzz ");
		}
		else
		{
			print("%d ",i);
		}
	}
}