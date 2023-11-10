#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *d;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	d = *head;

	if (d != NULL)
	{
		while (d->next != NULL)
			d = d->next;
		d->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = d;

	return (new);
}
