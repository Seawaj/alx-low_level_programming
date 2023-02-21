#include "main.h"

/**
 * print_alphabet_x10 - the function
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
