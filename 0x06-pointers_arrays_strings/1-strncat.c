#include "main.h"
#include <string.h>

/**
 * _strncat - concat's two strings in nth char
 *
 * @dest: destination string
 * @src: string to be concat to dest
 * @n: any integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
