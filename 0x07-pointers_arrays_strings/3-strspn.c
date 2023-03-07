#include "main.h"

/**
 * _strspn - finds number of bytes in a string and another string
 *
 * @s: string
 * @accept: string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	j = 0;
	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (j);
			}
		}
		s++;
	}
	return (j);
}
