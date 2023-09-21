#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to head node
 * @str: str of the node
 *
 * Return: size of the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_begin = malloc(sizeof(list_t));

	if (!head || !new_begin)
		return (NULL);
	if (str)
	{
		new_begin->str = strdup(str);
		if (!new_begin->str)
		{
			free(new_begin);
			return (NULL);
		}
		new_begin->len = _strlen(new_begin->str);
	}
	new_begin->next = *head;
	*head = new_begin;
	return (new_begin);
}
