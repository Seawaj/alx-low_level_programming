#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each array
 *
 * @array: the array
 * @size: size of the array
 * @action: pointer to the funtion
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
