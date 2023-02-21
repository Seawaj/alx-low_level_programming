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
	_putchar(i + '0');
	return (i);
}
