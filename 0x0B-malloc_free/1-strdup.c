#include "main.h"

/**
 * _strdup - function that returns a pointer
 *
 * @str: string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int t = 0, size = 0;

	char *y;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)

	y = malloc(size * sizeof(*str) + 1);

	if (y == 0)
		return (NULL);

	else
	{
		for (; t < size; t++)
			y[t] = str[t];
	}
	return (y);
}
