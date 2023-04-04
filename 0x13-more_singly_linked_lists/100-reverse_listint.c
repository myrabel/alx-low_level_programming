#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer
 * Return: result
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;
	return (*head);
}
