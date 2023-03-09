#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints function in reverse
 *
 * @s: any string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *sr;
	int j;
	
	j = strlen(s) - 1;
	for (; j >= 0; j--)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
