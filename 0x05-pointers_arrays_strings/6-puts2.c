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
	int i, j;

	j = strlen(str);
	for (i = 0;  i < j; i += 2)
	{
		_putchar(str[i]);
	}
}
