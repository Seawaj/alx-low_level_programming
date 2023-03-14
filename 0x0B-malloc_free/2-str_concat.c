#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc((strlen(s1) + strlen(s2)) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	j = strlen(s1);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[strlen(ptr)] = s2[i];
	return (ptr);
}
