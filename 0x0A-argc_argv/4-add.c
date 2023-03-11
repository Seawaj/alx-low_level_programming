#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - checks if string there are digit
* @str: array str
*
* Return: Always 0 (Success)
*/
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
* main - Entry point
*
* @argc: number of arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			j = atoi(argv[i]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
