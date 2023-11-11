#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of list
 * @head: pointer to head of the list
 * @index: index of the node to return
 * Return: address of the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m;

	m = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (index == m)
			return (head);
		m++;
		head = head->next;
	}
	return (NULL);
}
