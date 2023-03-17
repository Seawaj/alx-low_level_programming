#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat's two strings in nth char
 *
 * @s1: destination string
 * @s2: string to be concat to s2
 * @n: any integer
 *
 * Return: A pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) < n)
		n = strlen(s2);
	ptr = malloc(strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[strlen(ptr)] = s2[i];
	return (ptr);
}
