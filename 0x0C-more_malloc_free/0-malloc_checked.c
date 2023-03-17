#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * malloc_checked - Returns a pointer to an allocated memory
 *
 * @b: units required
 *
 * Return: A pointer or normal exit code
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (ptr);
}
