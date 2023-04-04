#include "lists.h"

/**
 * delet_nodeint_at_index - delete node function
 * @head: pointer
 * @index: index
 * Return: 1 if success -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		dnode = temp;
		dnode = dnode->next;
		temp->next = dnode->next;
		free(dnode);
	}
	return (1);
}
