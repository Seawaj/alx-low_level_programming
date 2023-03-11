#include <stdio.h>
#include <stdlib.h>

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
	int mul;
	
	if (argc == 3)
	{
		mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d\n", mul);
	}
	printf("Error\n");
	return (0);
}
