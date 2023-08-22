#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: int parameter 1
 * @b: int parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
