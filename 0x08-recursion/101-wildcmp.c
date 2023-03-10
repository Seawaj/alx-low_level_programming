#include "main.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: any string
 * @s2: any string
 *
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if ((*s2 != '\0') && (*s2 == '*'))
			return (wildcmp(s1, s2 + 1));
		else
			return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
