#include "main.h"

/**
 * print_rev - Program entry
 * @s: String in consideration
 */

void print_rev(char *s)
{
	int i, k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;

	while (k >= 0)
	{
		_putchar(s[k]);
		k--;
	}
	_putchar('\n');
}
