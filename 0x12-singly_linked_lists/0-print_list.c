#include "lists.h"

/**
 * _strlen - returns the length of string
 * @s: the string
 *
 * Return: the length of string
*/

int _strlen(char *s)
{
	int k = 0;

	if (!s)
		return (0);
	while (*s++)
		k++;
	return (k);
}

/**
 * print_list - function that prints all the elements
 * @h: pointer to first node
 *
 * Return: size of the length
*/

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("[%d]%s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		k++;
	}
	return (k);
}
