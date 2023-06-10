#include "main.h"

/**
 * is_palindrome - checks if strinh is palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int index, i, j;

	index = 0;

	while (s[index] != '\0')
		index++;

	j = index - 1;

	for (i = 0; i <= index / 2; i++)
	{
		if (s[i] == s[j])
		{
			j--;
			if (i == index / 2)
				return (1);
		}
		else
			return (0);
	}
}
