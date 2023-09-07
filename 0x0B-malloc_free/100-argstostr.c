#include "main.h"

/**
 * _strlen - find length of string
 * @s: string
 * Return:int
*/
int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
		return (0);

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: int
 * @av: arguments
 *
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int y = 0, nc = 0, e = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; y < ac; y++)
	{
		nc++;
		nc += _strlen(av[y]);
	}
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (y = 0; y < ac; y++)
	{
		for (e = 0; av[e][y] != "\0"; e++)
			cmpt++;
		s[cmpt] = av[e][y];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = "\0";
	return (s);
}

