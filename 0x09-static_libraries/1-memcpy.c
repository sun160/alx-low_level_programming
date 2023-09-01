#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: bytes from memory area
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}
