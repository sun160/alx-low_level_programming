#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int t = n;
	va_list ptr;

	va_start(ptr, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	while (t--)
		printf("%d%s", va_arg(ptr, int),
				t ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
