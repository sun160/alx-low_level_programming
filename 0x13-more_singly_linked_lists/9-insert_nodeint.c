#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index of the new node
 * @n: data of  the new node
 *
 * Return: address of  the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int f;
	listint_t *w;
	listint_t *node = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (!idx)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	for (f = 0; node && f < idx; f++)
	{
		if (f == idx - 1)
		{
			w->next = node->next;
			node->next = w;
			return (w);
		}
		else
			node = node->next;
	}

	free(w);
	return (NULL);
}
