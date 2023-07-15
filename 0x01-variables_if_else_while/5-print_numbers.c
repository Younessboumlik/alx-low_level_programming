#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[9] = "123456789";
	int i;
	for (i = 0; i < 10; i++)
	{	
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
