#include "main.h"

/**
 * print_last_digit - function that returns the last digit of a number
 *
 * @n: any integer
 *
 * Return: Always 0 on (Success)
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1
	}
	_putchar(i + '0');
	return (i);
}
