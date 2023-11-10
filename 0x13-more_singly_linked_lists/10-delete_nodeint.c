#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer of the first node
 * @index: index of the node
 *
 * Return: 1 (Success), or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *cur;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (e < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		e++;
	}


	cur = node->next;
	node->next = cur->next;
	free(cur);

	return (e);
}
