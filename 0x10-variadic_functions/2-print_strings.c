#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int t = n;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	if (!n)
	{
		printf("\n");
		return;
	}
	while (t--)
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "nil",
				t ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
