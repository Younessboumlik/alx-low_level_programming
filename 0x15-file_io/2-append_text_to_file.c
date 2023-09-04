#include "main.h"

/**
 * append_text_to_file - add text to the file.
 *
 * @filename: tha name of file.
 * @text_content: the content of the text.
 * Return: 1 if it works, and -1 if not.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, o, w;
	char *ch = text_content;

	if (filename == NULL)
	{
		return (-1);
	}
	while(*ch)
	{
		i = i + 1;
		ch = ch + 1;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
