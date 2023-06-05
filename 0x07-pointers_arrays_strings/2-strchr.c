#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: Pointer to a string
 * @c: Character
 * Return: pointer to the first occurrence of the character c
 * in the string s,or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int index;

	index = 0;

	while (s[index])
	{
		if (s[index] == c)
			break;
		else if (s[index] == '\0')
			return (NULL);
		index++;
	}

	return (s[index]);
}
