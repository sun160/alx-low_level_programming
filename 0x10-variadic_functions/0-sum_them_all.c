#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters
 *
 * @n: the number of integers
 * @...: the integers to sum
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int m = 0, i = n;
	va_list ptr;

	va_start(ptr, n);
	if (!n)
		return (0);

	while (i--)
		m += va_arg(ptr, int);
	va_end(ptr);
	return (m);
}
