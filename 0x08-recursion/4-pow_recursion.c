#include "main.h"
#include <math.h>

/**
 * _pow_recursion - finds the power of any number
 *
 * @x: any number
 * @y: any number
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
