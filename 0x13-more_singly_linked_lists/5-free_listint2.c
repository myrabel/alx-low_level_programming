#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer
 * Return: set head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
