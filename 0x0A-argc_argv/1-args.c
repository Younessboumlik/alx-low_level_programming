#include <stdio.h>

/**
 *main - the number of arguments.
 *
 * @argc: the counter of args.
 * @argv: the values of args.
 * Return: the number of args.
 */

int main1(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
