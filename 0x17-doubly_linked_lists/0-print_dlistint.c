#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 *
 * @h: head of the list
 * Return: size of list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}

	return (m);
}
