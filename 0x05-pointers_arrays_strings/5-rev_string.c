#include "main.h"

/**
 * rev_string - Program entry
 * @s: String in consideration
 */

void rev_string(char *s)
{
	int i, j, k;
	char *str;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		str[k] = s[j];
		k++;
		j--;
	}
}
