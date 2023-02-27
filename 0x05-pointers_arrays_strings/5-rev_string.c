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
	char *a;
	int i, j;

	j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		a[j] = s[i];
		j++;
	}
	*s = *a;
}
