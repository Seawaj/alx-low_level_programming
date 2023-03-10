#include "main.h"
#include <ctype.h>

/**
 * _islower - the function
 *
 * @c: 'Takes any integer (c)'
 *
 * Return: 1 Always (Success)
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
