#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *si = "Size of";
	char *by = "byte(s)\n";

	printf("%s a char: %lu %s", si, (unsigned long)sizeof(char), by);
	printf("%s an int: %lu %s", si, (unsigned long)sizeof(int), by);
	printf("%s a long int: %lu %s", si, (unsigned long)sizeof(long int), by);
	printf("%s a long long int: %ld %s", si, sizeof(long long int), by);
	printf("%s a float: %lu %s", si, (unsigned long)sizeof(float), by);
	return (0);
}
