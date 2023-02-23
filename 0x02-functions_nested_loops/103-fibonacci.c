#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 0;
	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c > 4000000)
		{break; }
		if (c % 2 == 0)
		{sum += c; }
	}
	printf("%lu\n", sum);
	return (0);
}
