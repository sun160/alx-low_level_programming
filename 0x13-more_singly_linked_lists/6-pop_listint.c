#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first node
 *
 * Return: the data inside the deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *del;
	int g;

	if (!head || !*head)
		return (0);

	del = (*head)->next;
	g = (*head)->n;
	free(*head);
	*head = del;

	return (g);
}
