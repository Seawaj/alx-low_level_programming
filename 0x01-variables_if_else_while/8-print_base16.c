#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;

	i = 0;
	j = 'a';
	while ((i < 10) || (j <= 'f'))
	{
		if (i < 10)
		{
			putchar(i + '0');
			i++;
		}
		else
		{
			putchar(j);
			j++;
		}
	}
	putchar('\n');
	return (0);
}
