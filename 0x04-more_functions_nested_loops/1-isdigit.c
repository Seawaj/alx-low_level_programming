#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks if an integer is a digit
 *
 * @c: any integer
 *
 * Return: 0 if c not a digit and 1 otherwise
 */
int _isdigit(int c)
{return isdigit(c) == 0 ? 0 : 1; }
