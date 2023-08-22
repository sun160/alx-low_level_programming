#include "main.h"

/**
 * print_rev - function that prints a string
 *
 * @s: pointer to the string
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
