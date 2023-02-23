#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	double a, b, c;
	int count;

	a = 1;
	b = 2;
	count = 3;
	printf("%.0lf, %.0lf, ", a, b);
	while (count <= 98)
	{
		c = a + b;
		printf("%.0lf", c);
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
