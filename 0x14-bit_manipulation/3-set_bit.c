#include "main.h"

/**
 * set_bit - sets a bit of index
 * @n: pointer to the number to change
 * @index: index of the bit
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1L << index) | *n);
	return (1);
}
