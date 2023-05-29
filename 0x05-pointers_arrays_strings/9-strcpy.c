#include "main.h"

/**
 * _strcpy - Program entry
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
		i++;

	j = 0;

	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
