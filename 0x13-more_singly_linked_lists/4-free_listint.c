#include "lists.h"
/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head node of the linked list to free.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
