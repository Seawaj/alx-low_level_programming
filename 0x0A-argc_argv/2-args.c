#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Holds number of entered arguments
 * @argv: An array of entered arguments
 *
 * Return: ALways 0 on Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
