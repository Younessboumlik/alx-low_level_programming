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
	ssize_t o, w, r;
	char *ch;

	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	ch = malloc(letters);
	if (ch == NULL)
		return (0);
	r = read(o, ch, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, ch, r);
	if (w == -1 || w != r)
		return (0);
	close(o);
	free(ch);
	return (w);
}
