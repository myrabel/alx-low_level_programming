#include "lists.h"

/**
 * delete_nodeint_at_index - delete node function
 * @head: pointer
 * @index: index
 * Return: 1 if success -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dnode;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (temp != NULL && i != index - 1)
		{
			i++;
			temp = temp->next;
		}
		if (i != index - 1)
			return (-1);
		dnode = temp->next;
		temp->next = temp->next->next;
		free(dnode);
		return (1);
	}
}
