#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int a, m;

	for (a = 0; a <= 9; a++)
	{
		for (m = a + 1; m <= 9; m++)
		{
			putchar(a + 48);
			putchar(m + 48);

			if (a + m != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
