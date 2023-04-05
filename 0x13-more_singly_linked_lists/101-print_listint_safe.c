#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_num - gets the number of each elements
*
* @head: pointer to the head of the listint_t
*
* Return: size_t else 0
*/
size_t get_num(const listint_t *head)
{
	const listint_t *i, *j;
	size_t k;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	j = (head->next)->next;
	while (j)
	{
		if (j == i)
		{
			i = head;
			while (j != i)
			{
				k++;
				i = i->next;
				j = j->next;
			}
			i = i->next;
			while (j != i)
			{
				k++;
				i = i->next;
			}
			return (k);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}

/**
* print_listint_safe - prints a listint_t linked list
*
* @head: pointer to the head of the linked list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;

	i = get_num(head);
	j = 0;
	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; j < i; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}
