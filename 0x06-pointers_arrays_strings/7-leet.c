#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s; String in consideration
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: Pointer to the String
 */

char *leet(char *s)
{
	int i = 0, j, k;

	while (s[i] != '\0')
		i++;
	k = i - 1;

	for (j = 0; j <= k; j++)
	{
		if (s[j] == 'a' || s[j] == 'A')
			s[j] = '4';
		else if (s[j] == 'e' || s[j] == 'E')
			s[j] = '3';
		else if (s[j] == 'o' || s[j] == 'O')
			s[j] = '0';
		else if (s[j] == 't' || s[j] == 'T')
			s[j] = '7';
		else if (s[j] == 'l' || s[j] == 'L')
			s[j] = '1';
	}
	return (s);
}
