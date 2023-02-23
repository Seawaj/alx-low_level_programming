#include "main.h"

/**
 * print_triangle - Prints Triangle
 *
 * @size: any integer
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, l, m;

	j = size - 1;
	k = 1;
	for (i = 0; (size > 0) && (i < size); i++)
	{
		if (size != 1)
		{
			for (l = 0; l < j; l++)
			{
				_putchar(' ');
			}
			j--;
			for (m = 0; m < k; m++)
			{
				_putchar('#');
			}
			k++;
			_putchar('\n');
		}
		else
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
