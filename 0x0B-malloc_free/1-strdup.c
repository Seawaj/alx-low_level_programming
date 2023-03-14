#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer toa new string
 *
 * @str: The old string
 *
 * Return: Pointer to a new string else NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(strlen(str) * sizeof(str));
	if ((str == NULL) || (ptr == NULL))
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		ptr[i] = str[i];
	return (ptr);
}
