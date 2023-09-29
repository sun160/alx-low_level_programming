#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 for big, 1 for small
*/

int get_endianness(void)
{
	unsigned long int b = 1;
	char *s = (char *) &b;

	return (*s);
}
