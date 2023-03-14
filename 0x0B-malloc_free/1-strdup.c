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

	j = 0;
	while (str[j] != '\0')
		j++;

	ptr = malloc(strlen(str) * j);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = str[i];
	return (ptr);
}
