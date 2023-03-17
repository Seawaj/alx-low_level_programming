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
	size_t len1, len2;
	char *result;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2) n = len2;
	result = malloc(len1 + n + 1);
	if (result == NULL) return NULL;
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';
	return (result);
}
