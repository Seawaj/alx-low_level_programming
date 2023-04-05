#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
*
* @head: pointer to head of the linked list
*
* Return: the head node’s data (n), if the list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (i);
}

