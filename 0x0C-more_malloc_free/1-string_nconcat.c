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
	unsigned int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			string[j] = s1[j];
		if (j >= i)
		{
			string[j] = s2[k];
			k++;
		}
		j++;
	}
	string[j] = '\0';
	return (string);
}
