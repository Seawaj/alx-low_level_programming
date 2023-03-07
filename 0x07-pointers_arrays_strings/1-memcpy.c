#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area
 *
 * @dest: memeory arear destination
 * @src: from memory arear
 * @n: any unsigned int
 *
 * Return: pointer to a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
