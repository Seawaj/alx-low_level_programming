#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: any integer
 *
 * Return: Always 0
 */
void print_times_table(int n)
{

	if ((n <= 15) && (n >= 0))
	{
		int i, j, k, l;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (k >= 100)
				{
					l = k / 10;
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 10)
				{_putchar((k / 10) + '0'), _putchar((k % 10) + '0'); }
				else
				{_putchar(k + '0'); }
				if (j == n)
				{break; }
				_putchar(',');
				if ((((j + 1) * i) >= 10) && (((j + 1) * i) < 100))
				{_putchar(' '), _putchar(' '); }
				else if (((j + 1) * i) >= 100)
				{_putchar(' '); }
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
