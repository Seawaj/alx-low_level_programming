#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
*
* @head: pointer to the first element of the list
*
* Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;
	while (*head)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}
	*head = i;
	return (*head);
}

