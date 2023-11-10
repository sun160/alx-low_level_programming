#include "main.h"

/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: string of  the binary number
 *
 * Return: the unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	int e;
	unsigned int con = 0;

	if (!b)
		return (0);

	for (e = 0; b[e]; e++)
	{
		if (b[e] < '0' || b[e] > '1')
			return (0);
		con = 2 * con + (b[e] - '0');
	}

	return (con);
}
