#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position in a listint_t linked list.
 * @head: pointer to a pointer to the head node of the linked list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: value of the data to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	for (i = 0; i < idx - 1 && currentNode != NULL; i++)
	{
		currentNode = currentNode->next;
	}

	if (currentNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
