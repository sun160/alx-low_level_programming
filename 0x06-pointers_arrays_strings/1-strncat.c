#include "main.h"

/**
 * _strncat - unction that concatenates two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input.
 * @n: most number of bytes @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
