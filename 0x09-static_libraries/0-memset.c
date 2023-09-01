#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @n: max bytes to use
 * @b: constant
 * @s: pointer
 *
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; n > 0; h++)
		n--;
	{
		s[h] = b;
	}

	return (s);
}
