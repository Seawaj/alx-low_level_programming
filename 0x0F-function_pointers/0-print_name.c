#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_name - Prints a name
 *
 * @name: Name to be printed
 * @f: ponter to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
