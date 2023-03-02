#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - rot13 Encryption
 *
 * @str: The string
 *
 * Return: Encrypted string
 */
char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			c = ((c - 'A' + 13) % 26) + 'A';
		}
		else if (c >= 'a' && c <= 'z')
		{
			c = ((c - 'a' + 13) % 26) + 'a';
		}
		str[i] = c;
	}

	return (str);
}
