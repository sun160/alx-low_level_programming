#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: The number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *i;

	while (argc--)
	{
		for (i = argv[argc]; *i; i++)
			if (*i < 0 || *i > 9)
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
