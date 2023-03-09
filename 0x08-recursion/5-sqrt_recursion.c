#include "main.h"

/**
 * _sqrt_recursion - finds square root of a number
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
		return (n);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
