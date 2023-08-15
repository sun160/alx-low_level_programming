#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 (success)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
