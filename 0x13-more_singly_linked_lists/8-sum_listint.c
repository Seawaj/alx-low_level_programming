#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a list
*
* @head: pointer to the first element of the linked list
*
* Return: if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

