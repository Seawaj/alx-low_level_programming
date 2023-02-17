#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m = n % 10;
	char *str = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (m > 5)
	{
		printf("%s %d is %d and is greater than 5", str, n, m);
	}
	else if (m == 0)
	{
		printf("%s %d is %d and is 0", str, n, m);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0", str, n, m);
	}
	return (0);
}
