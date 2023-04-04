#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in listint_t list
*
* @h: pointer to the linked list
*
* Return: number of elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
