#include "main.h"
#include <stddef.h>

/**
 * _strchr -finds the first occurrence of the character c in the string s
 *
 * @s: any string
 * @c: any char
 *
 * Return: A ponter to c in s else null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
