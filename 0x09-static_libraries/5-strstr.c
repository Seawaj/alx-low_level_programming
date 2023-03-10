#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurrence of a substring in a string
 *
 * @haystack: string
 * @needle: sebstring
 *
 * Return: A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
