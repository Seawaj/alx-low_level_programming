#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char *num1, char *num2)
{
	int n1, n2;

	n1 = atoi(num1);
	n2 = atoi(num2);
	return (n1 * n2);
}

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	result = multiply(num1, num2);
	printf("%d\n", result);
	return 0;
}
