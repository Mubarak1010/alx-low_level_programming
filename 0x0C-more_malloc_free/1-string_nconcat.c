#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be printed froms2.
 * Return: NULL •If the function fails
 * pointer to the newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, k, l, space;

	i = 0;
	j = 0;
	space = i + n;

	string = malloc(sizeof(*string) * space);

	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	l = i;
	if (n >= j)
	{
		for (k = 0; k < j; k++)
		{
			string[i] = s2[k];
			i++;
		}
		string[i] = '\0';
	}
	else if (n < j)
	{
		for (k = 0; k < n; k++)
		{
			string[l] = s2[k];
			l++;
		}
		string[l] = '\0';
	}
	return (string);
}
