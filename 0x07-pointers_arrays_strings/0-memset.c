#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to a mem cell
 * @b: constant byte to be filled
 * @n: bytes of the memory area
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
