#include "lists.h"
#include <stddef.h>

/**
 * print_listint - print all elements of listint list
 * @h: integer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
