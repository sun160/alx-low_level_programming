#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end
 * @head: pointer to the first node
 * @n: data
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !end)
		return (NULL);

	end->next = NULL;
	end->n = n;

	if (!*head)
	{
		*head = end;
	}
	else
	{
		node = *head;

		while (node->next)
			node = node->next;
		node->next = end;
	}
	return (end);
}
