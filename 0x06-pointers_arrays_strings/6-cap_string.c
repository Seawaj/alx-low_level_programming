#include "main.h"

/**
 * cap_string - Changes string word from lowercase to uppercase
 *
 * @str: The string to be changed
 *
 * Return: Uppercase String word
 */
char *cap_string(char *str)
{
	int i, j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		j = ((str[i - 1] == ' ') || (str[i - 1] == '.')) ? 1 : 0;
		j = j || (str[i - 1] == '\n') || (str[i - 1] == '\t') ? 1 : 0;
		if (j && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
