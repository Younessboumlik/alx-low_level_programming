#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the mult of two int.
 *
 * @argc: the count of args.
 * @argv: the values of args.
 * Return: the mult of 2 int.
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x=atoi(argv[1]);
	y=atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}
