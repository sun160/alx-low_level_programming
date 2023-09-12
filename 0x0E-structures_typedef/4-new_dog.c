#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @s: string
 * Return:int
*/
int _strlen(char *str)
{
        int length = 0;


        while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - a function that return copy and string
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
*/

char * _strcopy(char *dest, char *src)
{
	int m;

	for (m =0; src[m]; m++)
		dest[m] = src[m];

	dest[m] = '\0';

	return (dest);
}


