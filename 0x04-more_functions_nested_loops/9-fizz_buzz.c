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

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 != 0)) // Corrected the condition here
        {
            printf("Fizz ");
        }
        else if ((i % 5 == 0) && (i % 3 != 0)) // Corrected the condition here
        {
            if (i == 100)
            {
                printf("Buzz");
            }
            else
            {
                printf("Buzz ");
            }
        }
        else if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}
