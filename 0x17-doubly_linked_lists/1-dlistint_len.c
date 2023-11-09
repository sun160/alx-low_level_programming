#include "lists.h"

/**
 * dlistint_len - returns length of list
 *
 * @h: head of the list
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
