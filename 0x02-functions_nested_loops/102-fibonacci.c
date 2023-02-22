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
	i = 3;
	while (i <= 50)
	{
		j = i - 1;
		k = i - 2;
		if ((j + k) == i)
		{
			printf(", ");
			printf("%d", i);
			i++;
		}
	}
	printf("\n");
	return (0);
}
