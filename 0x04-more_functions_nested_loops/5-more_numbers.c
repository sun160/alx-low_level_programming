#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int m, n;

	for (m = 0; m <= 14; m++)
	{
		for (n = 0; n <= 10; n++)
		{
			_putchar(m + 48);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
