#include "main.h"
#include <string.h>

/**
 * _strncpy - copys nth char from a string
 *
 * @dest: string to be copied from
 * @src: string copied
 * @n: any integer
 *
 * Return: src
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
