#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: the array
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b[n], i, j;

	*b = *a;
	for (i = 0; i < n; i++)
	{
		j = n - 1;
		a[i] = b[j];
	}
}
