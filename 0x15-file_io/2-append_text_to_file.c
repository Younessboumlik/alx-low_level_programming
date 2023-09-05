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
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	text_content = text_content - i;
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
