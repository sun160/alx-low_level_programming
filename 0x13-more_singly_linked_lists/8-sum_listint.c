#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: pointer of first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int t = 0;

	while (head)
	{
		t += head->n;
		head = head->next;
	}

	return (t);
}
