#include "main.h"

/**
 * print_diagonal - prints diagonal
 *
 * @n: any integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; (n > 0) && (i < n); i++)
	{
		if (i > 0)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
