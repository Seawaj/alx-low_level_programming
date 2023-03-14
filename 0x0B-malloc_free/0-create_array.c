#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars, and initializes it
 *
 * @size: Unit required
 * @c: Size in byte
 *
 * Return: A pointer to char array else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(c));
	if (ptr != NULL)
		return (ptr);
	return (NULL);
}
