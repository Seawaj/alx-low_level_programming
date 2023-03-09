#include "main.h"

/**
 * _sqrt - additional funtion to find the real square root
 *
 * @n: any number
 * @i: counter
 *
 * Return: integer
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - funtion to find the real square root
 *
 * @n: any number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt(n, 0));
}
