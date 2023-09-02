#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: The number of command line arguments
 *
 * Return: 0 if success
*/

int main(int argc)
{
	printf("%d\n", argc - 1);
	return (0);
}
