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
	int i;
	char c;


	for (i = 0; (str[i] != '\0') && (str[i] != '\n'); i++)
	{
		c = tolower(str[i]);

		if (c == 'a' || c == 'e' || c == 'o' || c == 't' || c == 'l')
		{
			str[i] = '0' + (c == 'a') * 4 + (c == 'e') * 3 + (c == 'o') * 0 + (c == 't') * 7 + (c == 'l') * 1;
		}
	}

	return (str);
}
