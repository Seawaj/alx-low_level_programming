#include "main.h"

/**
 * is_prime - checks if a number is prime or not
 *
 * @n: any integer
 * @i: counter
 *
 * Return: integer
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if ((n % i == 0) && (i > 0))
		return (0);
	else
		return (is_prime(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 *
 * @n: any integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, n - 1));
}
