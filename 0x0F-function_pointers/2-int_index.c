#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the int array
 * @size: size of array
 * @cmp: pointer to the function
 *
 * Return: the integer index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int r = 0;

	if (array && size && cmp)
		while (r < size)
		{
			if (cmp(array[r]))
				return (r);
			r++;
		}
	return (-1);
}
