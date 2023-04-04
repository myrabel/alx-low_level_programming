#include "lists.h"

/**
 * listint_len - return no of elements in linked list
 * @h: pointer
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
