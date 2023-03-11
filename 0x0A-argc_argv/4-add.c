#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int add, i;

	add = 0;
	if (argc == 1)
	{
		printf("%d\n", add);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
			add += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
