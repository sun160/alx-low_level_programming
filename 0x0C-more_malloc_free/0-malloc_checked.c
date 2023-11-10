#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: int
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *t = malloc(b);

	if (t == 0)
		exit(98);
	return (t);
}
