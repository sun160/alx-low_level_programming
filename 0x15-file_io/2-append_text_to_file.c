#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The string
 *
 * Return: 1 on succuss -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, r, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	r = write(o, text_content, length);

	if (o == -1 || r == -1)
		return (-1);

	close(o);

	return (1);
}
