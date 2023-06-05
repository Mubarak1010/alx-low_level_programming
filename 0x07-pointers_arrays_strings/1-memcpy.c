#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: Destination
 * @src: Source
 * @n: bytes from memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
