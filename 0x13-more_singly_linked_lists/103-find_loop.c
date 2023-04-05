#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
*
* @head: pointer to the linked list
*
* Return: The address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low;
	listint_t *high;

	low = head;
	high = head;
	if (!head)
		return (NULL);
	while ((low && high) && fast->next)
	{
		low = low->next;
		high = high->next->next;
		if (low == high)
		{
			low = head;
			while (low != high)
			{
				low = low->next;
				high = high->next;
			}
			return (high);
		}
	}
	return (NULL);
}
