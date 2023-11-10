#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * @k: square root
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int k);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural square
 * @n: number to calculate the sqaure root of
 * @k: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	else if (k * k < n)
		return (actual_sqrt_recursion(n, k + 1));
}
