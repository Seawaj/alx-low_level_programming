#include "main.h"

/**
 * swap_int - Function that swaps two values
 *
 * @a: any pointer
 * @b: anypointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
