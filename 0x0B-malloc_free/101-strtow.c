#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 *
 * @str: The string to be split
 *
 * Return: A pointer to multi-dimentional array
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j, k, l;

	if (str == NULL)
		return (NULL);
	k = 1, j = 0, l = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			k += 1;
	}
	ptr = malloc(k * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		for (; str[j] != ' '; j++)
			l++;
		ptr[i] = malloc(l * sizeof(char));
		l = 0;
	}
	return (ptr);
}
