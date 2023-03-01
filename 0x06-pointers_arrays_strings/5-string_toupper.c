#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - Changes string from lowercase to uppercase
 *
 * @str: The string to be changed
 *
 * Return: Uppercase String
 */
char *string_toupper(char *str)
{
	int i;

	for (int i = 0; str[i]!='\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
