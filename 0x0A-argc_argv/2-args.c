#include "main.h"
#include <stdio.h>

/** 
 * main - print the args of a program.
 *
 * @argc: the counter of args.
 * @argv: the values of args.
 * Return: prints the arguments.
 */

int main(int argc, char **argv)
{
	int i=0;

	for(; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
