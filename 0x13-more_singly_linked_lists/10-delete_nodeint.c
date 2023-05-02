#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * at index of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *p;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		c = *head;
		*head = (*head)->next;
		free(c);
		return (1);
	}

	p = *head;
	c = (*head)->next;
	for (i = 1; c && i < index; i++)
	{
		p = c;
		c = c->next;
	}

	if (c == NULL)
		return (-1);

	p->next = c->next;
	free(c);

	return (1);
}
