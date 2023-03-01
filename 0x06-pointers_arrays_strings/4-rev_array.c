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
	int b[200], i, j;

	for (i = 0; i < 5; i++)
	{
		b[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		j = n - (i + 1);
		a[i] = b[j];
	}
}
