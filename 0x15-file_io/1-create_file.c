#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int s, y, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	s = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR, S_IWUSR);

	if (s == -1 || y == -1)
		return (-1);
	if (l)
		y = write(s, text_content, l);

	close(s);

	return (y == l ? 1 : -1);
}
