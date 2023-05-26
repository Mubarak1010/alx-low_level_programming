#include "main.h"

/**
 * more_numbers - Program entry
 */

void more_numbers(void)
{
	int i;
	char a, b;

	i = 0;

	while (i < 10)
	{
		for (a = '0'; a <= '9'; a++)
		{
			_putchar(a);
		}
		for (b = '0'; b <= '4'; b++)
		{
			_putchar('1');
			_putchar(b);
		}
		_putchar('\n');
		i++;
	}
}
