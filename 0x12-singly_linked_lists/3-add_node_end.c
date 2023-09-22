#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: pointer of head node
 * @str: string of node
 *
 * Return: address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t f;
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);

	new_node->str = strdup(str);

	for (f = 0; str[f]; f++)
		;
	new_node->len = f;
	new_node->next = NULL;
	node = *head;

	if (node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	return (*head);
}
