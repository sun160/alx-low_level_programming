#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 if succes
*/

int main(int argc, char const *argv[])
{
	int s = 0;

	while (argc--)
	{
		printf("%s\n", argv[s]);
		s++;
	}
	return (0);
}
