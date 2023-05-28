#include "main.h"

/**
 * more_numbers - Program entry
 */

void more_numbers(void)
{
	char *s = "01234567891011121314";
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
		j++;
	}
}
