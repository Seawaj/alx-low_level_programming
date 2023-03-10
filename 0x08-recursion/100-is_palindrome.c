#include "main.h"

/**
 * _len - prints function in reverse
 *
 * @s: any string
 *
 * Return: integer
 */
int _len (char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_len(s + 1) + 1);
}

/**
 * real_pal - prints function in reverse
 *
 * @s: any string
 * @i: any integer
 * @j: any integer
 *
 * Return: integer
 */
int real_pal(char *s, int i, int j)
{
	if (*(s + j - 1) != *(s + i))
		return (0);
	else if (i >= j)
		return (1);
	else
		return (real_pal(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks for palindrome
 *
 * @s: any string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (real_pal(s, 0, _len(s)));
}
