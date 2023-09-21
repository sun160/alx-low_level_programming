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
	int l = 0;

	if (!head || !new_begin)
		return (NULL);
	while (str[l])
		l++;
	new_begin->len = l;
	new_begin->str = strdup(str);
	new_begin->next = *head;
	*head = new_begin;
	return (new_begin);
}
