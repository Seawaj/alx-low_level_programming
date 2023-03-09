#include "main.h"

/**
 * _print_rev_recursion - prints function in reverse
 *
 * @s: any string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
