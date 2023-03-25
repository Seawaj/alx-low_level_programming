#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of arguments passed to the function
 * @...: arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list j;
	unsigned int i;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(j, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(j);
}
