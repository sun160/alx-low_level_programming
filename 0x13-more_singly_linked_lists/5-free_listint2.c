#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *u;

	if (!head)
		return;

	while (*head)
	{
		u = (*head)->next;
		free(*head);
		*head = u;
	}

	*head = NULL;
}

