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
	int i;

	if ((n == NULL) || (n < 0))
		return (NULL);
	if (strlen(s2) < n)
		n = strlen(s2);
	strncat(s1, s2, n);
	ptr = malloc(strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	return (ptr);
}
