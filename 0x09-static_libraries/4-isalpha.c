#include "main.h"
#include <ctype.h>

/**
 * _isalpha - the function
 *
 * @c: 'Takes any integer (c)'
 *
 * Return: 1 Always (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
