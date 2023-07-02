#include "main.h"
#include <stdlib.h>

/**
 * argstostr - program entry
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int c = 0, i = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
		i++;
	}

	str = malloc((sizeof(char) * c) + ac + 1);

	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}
