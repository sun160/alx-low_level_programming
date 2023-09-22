#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: pointer to head node
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *n, *next_n;

	if (!head)
		return;
	n = head;
	while (n)
	{
		next_n = n->next;
		free(n->str);
		free(n);
		n = next_n;
	}
}
