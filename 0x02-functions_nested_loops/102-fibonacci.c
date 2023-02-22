#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, count;

	a = 1;
	b = 2;
	count = 0;
	printf("%d %d, ", a, b);
	while (b <= 20365011074 && count < 48)
	{
		c = a + b;
		if (c <= 0)
		{break; }
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("%d\n", a + b);
	return (0);
}
