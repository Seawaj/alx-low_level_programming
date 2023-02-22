#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	printf("%d, %d", 1, 2);
	for (i = 3; i <= 50; i++)
	{
		j = i - 1;
		k = i - 2;
		if ((j + k) == i)
		{
			printf(", ");
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
