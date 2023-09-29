#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number of index
 * @index: index of the bit
 *
 * Return: value of the bit or -1 if an error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index >= sizeof(n) * 8)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
