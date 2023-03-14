#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char
 *
 * @size: Unit required
 * @c: Size in byte
 *
 * Return: A pointer to char array else NULL
 */
char *create_array(unsigned int size, char c)
{
	return (malloc(size * sizeof(c)));
}
