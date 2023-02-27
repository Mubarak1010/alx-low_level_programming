#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the string
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
