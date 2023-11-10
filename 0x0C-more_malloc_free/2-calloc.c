#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: arrary length
 * @size: size of element
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *k;

	if (size == 0 || nmemb == 0)
		return (NULL);

	k = malloc(sizeof(int) * nmemb);

	if (k == 0)
		return (NULL);

	_memset(k, 0, sizeof(int) * nmemb);

	return (k);
}

