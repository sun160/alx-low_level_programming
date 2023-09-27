#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: pointer of the  first node
 * @index: index of the node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int y = 0;
        listint_t *x = head;

        while (x && y < index)
        {
                x = x->next;
                y++;
        }

        return (x);
}
