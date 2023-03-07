#include "main.h"
#include <string.h>

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *
 * @s: pointer
 * @b: any char
 * @n: unsigned int
 *
 * Return: A pointer of type char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n*sizeof(s));
}
