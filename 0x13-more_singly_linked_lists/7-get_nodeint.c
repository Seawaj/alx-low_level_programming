#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
*
* @head: pointer to the first element of the linked list
* @index: index of the node, starting at 0
*
* Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	i = 0;
	tmp = head;
	while ((i && tmp) < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}
