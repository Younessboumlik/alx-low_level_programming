#include "main.h"
#include <sdtio.h>

/**
 * main - print the args of a program.
 *
 * @argc: the counter of args.
 * @argv: the values of args.
 * Return: prints the arguments.
 */

int main(int argc, char **argv)
{
	for(i=1; i<argc-1; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}
