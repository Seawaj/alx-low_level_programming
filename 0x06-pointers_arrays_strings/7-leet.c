#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - Encode String
 *
 * @str: String
 *
 * Return: Encoded String
 */
char *leet(char *str)
{
	int i, j, k;
	char *result, c;

	result = (char *)malloc(strlen(str) + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		result[i] = str[i];
	}

	result[i] = '\0';

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		c = tolower(str[i]);

		if (c == 'a' || c == 'e' || c == 'o' || c == 't' || c == 'l')
		{
			k = '0' + (c == 'a') * 4 + (c == 'e') * 3 + (c == 'o')
			result[j] = k * 0 + (c == 't') * 7 + (c == 'l') * 1;
		}
	}

	return (result);
}
