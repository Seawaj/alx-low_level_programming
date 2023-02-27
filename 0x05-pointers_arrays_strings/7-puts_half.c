#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: any string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, k, n;

	k = strlen(str);
	n = k / 2;
	if (k % 2 != 0)
		n = (k - 1) / 2;

	for (; n < k; n++)
		_putchar(str[n]);
	_putchar('\n');
}
