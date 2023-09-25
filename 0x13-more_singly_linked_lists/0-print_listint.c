#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: pointer of the first node
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t g = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		g++;
	}
	return (g);
}
