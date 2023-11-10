#include "lists.h"

/**
 * free_listint -  function frees list
 * @head: listint_t list to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
