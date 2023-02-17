#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char alpha_b;

	alpha = 'a';
	alpha_b = 'A';
	while ((alpha <= 'z') || (alpha_b <= 'Z'))
	{
		if (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		else
		{
			putchar(alpha_b);
			alpha_b++;
		}
	}
	putchar('\n');
	return (0);
}
