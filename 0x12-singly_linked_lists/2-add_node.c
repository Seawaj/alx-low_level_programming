#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
*
* @head: double pointer to the linked  list
* @str: string to add to the node
*
* Return: pointer to new element or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
