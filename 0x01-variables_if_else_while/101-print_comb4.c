#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int s, d, f;

	for (s = 0; s <= 9; s++)
	{
		for (d = s + 1; d <= 9; d++)
		{
			for (f = d + 1; f <= 9; f++)
			{
				if (s != d && s != f && d != f)
				{
					putchar(s + 48);
					putchar(d + 48);
					putchar(f + 48);

					if (s + d + f != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
