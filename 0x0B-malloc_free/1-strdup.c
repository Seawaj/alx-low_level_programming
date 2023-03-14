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
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	ptr = malloc(strlen(str) * sizeof(str));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
