#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - finds first occurrence in a string of any bytes in another string
 *
 * @s: string
 * @accept: string
 *
 * Return: A pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
