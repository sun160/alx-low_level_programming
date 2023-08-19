#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int m, n, s;

	for (m = 0; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			n = s;
			if (n > 9)
			{
			_putchar(1 + 48);
			s = n % 10;
			}
			_putchar(s + 48);
		}
		_putchar('\n');
	}
}
