#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index] && index < n; index++)
		dest[len++] = src[index];
	return (dest);
}
