#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 *
 * @ac: number of arguments passed
 * @av: arguments
 *
 * Return: poiter to concatenated arguments passed
 */
char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int i, j;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; av[0][i]; i++)
		str[i] = av[0][i];
	str[strlen(str)] = '\n';
	for (i = 1; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; j < strlen(av[i]); j++)
			str[strlen(str)] = av[i][j];
		str[strlen(str)] = '\n';
	}
}
