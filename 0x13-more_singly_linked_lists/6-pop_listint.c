#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data n
 *
 * @head: pointer to pointer to the head of the list
 *
 * Return: the value of the deleted node's data n
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
