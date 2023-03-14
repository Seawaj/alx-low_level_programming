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
	unsigned int j;
	int i, k;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
		k += (strlen(av[i]));
	str = malloc((k + ac + 1) * sizeof(char));
	if (str == NULL)
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
	return (str);
}
