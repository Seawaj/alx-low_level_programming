#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - finds pointer to a 2 dimensional array of integers
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: A pointer to the array else NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
