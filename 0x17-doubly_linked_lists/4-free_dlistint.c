#include "lists.h"

/**
 * free_dlistint - free a dlist 
 * @head: pointer to head of the list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
