#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c, count;

	a = 1;
	b = 2;
	count = 0;
	printf("%lu %lu, ", a, b);
	while (count < 48)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		count++;
		if (c => 48)
		{break; }
		printf(", ");
	}
	printf("\n");
	return (0);
}
