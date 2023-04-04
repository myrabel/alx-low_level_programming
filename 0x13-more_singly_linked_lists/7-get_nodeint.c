#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth node in list
 * @head: pointer
 * @index: index variable
 * Return: index of node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
