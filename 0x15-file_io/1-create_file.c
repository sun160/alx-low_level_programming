#include "main.h"

/**
 * _strlen - return the length
 * @h: the string
 *
 * Return: length of string
*/

int _strlen(char *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (*h++)
		i++;
	return (i);
}

/**
 * create_file - Creates a file.
 * @filename: name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int s, y;
	ssize_t l = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	s = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR, S_IWUSR);

	if (s == -1 || y == -1)
		return (-1);
	if (l)
		y = write(s, text_content, l);

	close(s);

	return (y == l ? 1 : -1);
}
