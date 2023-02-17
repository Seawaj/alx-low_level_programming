#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 1;
	l = 2;
	while (l < 10)
	{
		if (((l <= 9) && (j <= 8)) && ((i < j) && (j < l)))
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(l + '0');
			if (((l == 9) && (j == 8)) && (i == 7))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		if (l == 9)
		{
			l = 2;
			j++;
		}
		else if (j > 8)
		{
			j = 1;
			i++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');
	return (0);
}
