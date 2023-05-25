#include "main.h"

/**
 * more_numbers - Program entry
 */

void more_numbers(void)
{
	char i;
	int j;

	j = 0;

	while (j < 10)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
