#include "main.h"

/**
 * _strlen - Program entry
 * @s: String in consideratiom
 * Return: length os string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
