#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer of the first node
 *
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
