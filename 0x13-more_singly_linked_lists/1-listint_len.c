#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Returns the number of elements in
 * a linked listint_t list
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
