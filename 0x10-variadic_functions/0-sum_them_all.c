#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all argument
 *
 * @n: number of argument passed to the function
 * @...: arguments passed
 *
 * Return: an integer or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list j;
	unsigned int i, sum;

	sum = 0;
	va_start(j, n);
	for (i = 0; i < n; i++)
		sum += va_arg(j, int);
	va_end(j);
	return (sum);
}
