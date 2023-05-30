#include "main.h"

/**
 * rev_string - Program entry
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int i, j, k;
	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		k = i / 2;
	else
		k = (i / 2) + 1;

	for (j = 0; j < k; j++)
	{
		temp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = temp;
		i--;
	}
}
