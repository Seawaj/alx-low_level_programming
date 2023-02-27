#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: any string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char a[];

	j = 0;

	*a = *s;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		s[j] = a[i];
		j++;
	}
}
