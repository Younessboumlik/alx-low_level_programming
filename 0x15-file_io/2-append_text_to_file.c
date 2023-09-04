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

	if (filename == NULL)
	{
		return (-1);
	}
	while (*text_content)
	{
		i = i + 1;
		text_content = text_content + 1;
	}
	text_content = text_content - i;
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	w = write(o, text_content, i);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
