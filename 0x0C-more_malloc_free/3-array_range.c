#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: starting int
 * @max: c
 * Return: arrary integers
*/

int *array_range(int min, int max)
{
	int len, c;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);

	for (c = 0; c < len; c++)
		ptr[c] = min++;

	return (ptr);
}
