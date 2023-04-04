#include "lists.h"

/**
 * pop_listint - delete head node and retrun head node data
 * @head: pointer
 * Return: if empty retrun 0
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}

