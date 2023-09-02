#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 *
 * @argc: The number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int s, leastcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (s = 0; s < 5; s++)
	{
		if (money >= cents[s])
		{
			leastcents += money / cents[s];
			money = money % cents[s];
			if (money % cents[s] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
