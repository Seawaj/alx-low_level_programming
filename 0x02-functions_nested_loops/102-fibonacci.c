#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	printf("%d, %d", 1, 2);
	i = 3;
	l = 2;
	while (i > 0)
	{
		if (l > 50)
		{break; }
		j = i - 1;
		k = i - 2;
		if ((j + k) == i)
		{
			printf(", ");
			printf("%d", i);
			l++;
		}
		i++;
	}
	printf("\n");
	return (0);
}
