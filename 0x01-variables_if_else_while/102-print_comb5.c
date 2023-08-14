#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);

			if (a + b != 197)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
