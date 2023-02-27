#include "main.h"
#include <string.h>

/**
 * puts2 - prints strings
 *
 * @str: any string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0;  i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
}
