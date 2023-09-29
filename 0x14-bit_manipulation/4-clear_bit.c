#include "main.h"

/**
 * clear_bit - sets the value of  a bit
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 for success, -1 in error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1L << index) & *n);
	return (1);
}
