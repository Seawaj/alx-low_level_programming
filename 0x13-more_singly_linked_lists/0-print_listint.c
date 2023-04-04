#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
*
* @h: pointer the linked list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
