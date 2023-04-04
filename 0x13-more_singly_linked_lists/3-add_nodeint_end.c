#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
*
* @head: pointer to the first element of the linked list
* @n: element to be inser
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp;

	temp = *head;
	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = end;
	return (end);
}

