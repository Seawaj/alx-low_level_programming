#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of value from min to max
 *
 * @min: min value
 * @max: max value
 *
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = (int *) malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
