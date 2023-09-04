#include "main.h"

/**
 * read_textfile - read text from txt file.
 *
 * @filename: the name of file.
 * @letters: the number of letters that we should print.
 * Return: the number of char printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, write, read;
	char *ch;

	if (filename == NULL)
		return (0);
	open = open(filename, O_RDONLY);
	if (opene == -1)
		return (0);
	ch = malloc(letters);
	if (ch == NULL)
		return (0);
	read = read(open, ch, letters);
	if (read == -1)
		return (0);
	write = write(STDOUT_FILENO, ch, read);
	if (write == -1 || write != read)
		return (0);
	close(open);
	free(ch);
	return (write);
}
