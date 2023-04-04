#include "lists.h"

/**
 * add_nodeint - add node to beginning of list
 * @n: pointer
 * @head: pointer to new node
 * Return: address of new element or Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
