#include <stdio.h>

void print_alphabet(void);
/**
 * print_alphabet - Prints the English alphabet in lowercase
 */
void print_alphabet(void);
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        putchar(i);
    }
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return 0;
}


