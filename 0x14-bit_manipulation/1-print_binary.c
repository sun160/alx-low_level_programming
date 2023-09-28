#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: number to print
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int f, print = 0;
	unsigned long int pre;

	for (f >= 0; f--)
	{
		pre = n >> f;

		if (pre & 1)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
