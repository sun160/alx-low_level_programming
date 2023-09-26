#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * @head: pointer of first node
 * @n: data of new node
 *
 * Return: pointer of new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begin;

	begin = malloc(sizeof(listint_t));
	if (!head || !begin)
		return (NULL);

	begin->n = n;
	begin->next = NULL;

	if (*head)
	{
		begin->next = *head;
		*head = begin;
	}
	return (begin);
}
