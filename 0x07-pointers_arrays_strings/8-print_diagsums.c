#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals square matrix
 *
 * @a: array
 * @size: any integer
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	i = 0, j = 0;
	for (k = 0; k < size; k++)
	{
		i += a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		j += a[(k * size) + (size - k - 1)];
	}
	printf("%d, %d\n", i, j);
}
