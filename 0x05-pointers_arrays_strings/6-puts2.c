#include "main.h"

/**
 * puts2 - Program entry
 * @str: String in consideratuion
 */

void puts2(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	k = i - 1;

	j = 0;

	while (j <= k)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
