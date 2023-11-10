#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int now = 0;
	unsigned long int exc = n ^ m;

	while (exc)
	{
		if (exc & 1)
			now++;
		exc = exc >> 1;
	}
	return (now);
}
