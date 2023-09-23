#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
