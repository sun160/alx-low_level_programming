#include "main.h"


/**
 * print_alphabet_x10 - function will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 0; l <= 9; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		putchar('\n');
	}
}
