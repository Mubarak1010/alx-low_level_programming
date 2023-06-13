#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: NULL if str = NULL.
 * •On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *string;
	int index, j;

	if (str == NULL)
		return (NULL);

	index = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	string = malloc(sizeof(char) * index);

	for (j = 0; j < index; j++)
	{
		string[j] = str[j];
	}

	return (string);

	free(string);
}
