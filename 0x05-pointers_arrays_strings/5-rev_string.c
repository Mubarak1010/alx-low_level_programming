#include "main.h"

/**
 * rev_string - Program entry
 * @s: String
 */

void rev_string(char *s)
{
	int i, j, k, max;
	char a[];

	a[] = 0;

	i = 0;

	while (s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}
	k = i - 1;
	max = k;

	for (j = 0; j <= k; j++)
	{
		s[j] = a[max];
		max--;
	}
}
