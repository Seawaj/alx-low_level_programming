#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: any int
 * @size: any int
 *
 * Return: a pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
