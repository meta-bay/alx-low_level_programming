#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: pointer to the filename
 * @text_content: end string
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int to_open, to_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	to_open = open(filename, O_WRONLY | O_APPEND);
	to_write = write(to_open, text_content, length);

	if (to_open == -1 || to_write == -1)
		return (-1);

	close(to_open);

	return (1);
}
