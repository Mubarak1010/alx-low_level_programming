#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: String.
 * Return: pointer to the string.
 */

char *rot13(char *s)
{
	int i = 0, j;
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a1[j])
				s[i] == a2[j];
		}
		i++;
	}
	return (s);
}
