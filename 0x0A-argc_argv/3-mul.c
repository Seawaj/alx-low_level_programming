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
	int sum;
	
	if (argc == 3)
	{
		sum = argv[(argc - 1) * (argc - 2)];
		printf("%d\n", sum);
	}
	printf("Error\n");
	return (0);
}
