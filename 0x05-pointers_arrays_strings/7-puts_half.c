#include "main.h"

/**
 * puts_half - Program entry
 * @str: String in consideration
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	k = i / 2;
	j = i - 1;

	while (k <= j)
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
