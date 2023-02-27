#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the string
 * Return: legnth of s
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
