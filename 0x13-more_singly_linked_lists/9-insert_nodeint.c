#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
*
* @head: pointer to the first element of the list
* @idx: index of the list where the new node should be added
* @n: element to insert
*
* Return: NULL on fail
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *el;
	listint_t *tmp = *head;

	el = malloc(sizeof(listint_t));
	if (!el || !head)
		return (NULL);
	el->n = n;
	el->next = NULL;
	if (idx == 0)
	{
		el->next = *head;
		*head = el;
		return (el);
	}
	for (i = 0; tmp && (i < idx); i++)
	{
		if (i == idx - 1)
		{
			el->next = tmp->next;
			tmp->next = el;
			return (el);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
