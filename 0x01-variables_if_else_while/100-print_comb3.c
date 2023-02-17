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
	int k;
	int n;

	i = 0;
	k = 0;
	j = 1;
	while (k < 100)
	{
		if (((j <= 9) && (i != j)) && (i < j))
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i != 8) && (j != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (j == 9)
		{
			j = 1;
			i++;
		}
		else
		{
			j++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
