#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer to first node
 *
 * Return: size of the elements
*/


size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		h = h->next;
		d++;
	}
	return (d);
}
