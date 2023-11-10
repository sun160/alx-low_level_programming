#include "variadic_functions.h"

/**
 * format_char - formats characters
 * @separator: string separator
 * @ptr: argument pointer
*/

void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * format_int - formats integer
 * @separator: string separator
 * @ptr: argument pointer
*/

void format_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * format_float - formats float
 *@separator: string separator
 * @ptr: argument pointer
*/

void format_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * format_string - formats string
 * @separator: string separator
 * @ptr: argument pointer
*/

void format_string(char *separator, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	switch ((int)(!str)){
		case 1:
			str = "(nil)";
			break;
	}
	printf("%s%s", separator, str);
}

/**
 * print_all - function that prints anything
 * @format: the format string
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ptr;

	va_start(ptr, format);
	token_t token[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	while (format && format[i])
	{
		j = 0;
		while (token[j].token)
		{
			if (format[i] == token[j].token[0])
			{
				token[j].f(separator, ptr);
				separator = ",";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
