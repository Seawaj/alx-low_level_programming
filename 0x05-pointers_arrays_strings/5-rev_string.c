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
	
	k = strlen(s);

	char *a = s;

	j = 0;

	for (i = 0;  i < k; i++)
	{
		a[i] = s[i];
	}
	for (i = k - 1; i >= 0; i--)
	{
		s[j] = a[i];
		j++;
	}
}
