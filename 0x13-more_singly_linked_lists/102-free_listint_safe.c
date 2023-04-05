#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
*
* @h: pointer to list
*
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	int j;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
