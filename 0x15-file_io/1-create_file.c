#include "main.h"

/**
 * create_file - creating a file and putting a text in them.
 *
 * @filename: the name of file.
 * @text_content: the content of text.
 * Return: 1 if it is working, and -1 if not.
 */

int create_file(const char *filename, char *text_content)
{
	int opening, writing, i, closing;

	if (filename == NULL)
		return (-1);
	opening = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (opening == -1)
		return (-1);
	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}
	writing = write(opening, text_content, i);
	if (writing == -1)
		return (-1);
	closing = close(opening);
	if (closing == -1)
		return (-1);
	return (1);
}
