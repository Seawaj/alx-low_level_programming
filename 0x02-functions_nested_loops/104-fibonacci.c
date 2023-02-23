#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long double a, b, c;
	int count;

	a = 1;
	b = 2;
	count = 3;
	printf("%.0Lf, %.0Lf, ", a, b);
	while (count <= 98)
	{
		c = a + b;
		printf("%.0Lf", c * 2);
		a = b;
		b = c;
		count++;
		if (count > 98)
		{break; }
		printf(", ");
	}
	printf("\n");
	return (0);
}
