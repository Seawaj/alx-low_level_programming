#include "main.h"

/**
 * print_line - print line n times
 *
 * @n: any integer
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while ((n > 0) && (i < n))
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}