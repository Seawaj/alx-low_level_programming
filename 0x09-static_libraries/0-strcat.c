#include "main.h"
#include <string.h>

/**
 * _strcat - concat's two strings
 *
 * @dest: destination string
 * @src: string to be concat to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
