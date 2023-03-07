#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: memeory arear destination
 * @src: from memory arear
 * @n: any unsigned int
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **prt;

	dest = n * sizeof(src);
	prt = &dest;
	return (prt);
}
