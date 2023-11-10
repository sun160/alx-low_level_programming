#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: name of file to  read
 * @letters: number of letters to be read
 * Return: number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int s;
	ssize_t y;
	ssize_t e;

	if (!filename || !letters)
		return (0);
	s = open(filename, O_RDONLY);
	if (s == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	e = read(s, buf, letters);
	y = write(STDOUT_FILENO, buf, e);

	free(buf);
	close(s);
	return (y);
}
