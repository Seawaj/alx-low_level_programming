#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	j = 0;
	for (i = 3; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
