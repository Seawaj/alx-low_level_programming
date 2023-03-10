#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase letters
 *
 * @c: any integer
 *
 * Return: 0 on Success
 */
int _isupper(int c)
{
	return (isupper(c) == 0 ? 0 : 1);
}
