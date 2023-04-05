#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t list
*
* @head: pointer head of the list
* @index:  index of the node that should be deleted. Index starts at 0
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *str;
	unsigned int i;

	tmp = *head;
	str = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
		return (-1);
		tmp = tmp->next;
		i++;
	}
	str = tmp->next;
	tmp->next = str->next;
	free(str);
	return (1);
}
