#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Holds number of entered arguments
 * @argv: An array of entered arguments
 *
 * Return: ALways 0 on Success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
