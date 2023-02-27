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
	int i, j, k;
	
	k = strlen(s) + 1;

	char a[k];

	j = 0;

	for (i = k - 1;  i >= 0; i--)
	{
		a[i] = s[i];
	}
	for (i = k - 2; i >= 0; i--)
	{
		s[j] = a[i];
		j++;
	}
}
