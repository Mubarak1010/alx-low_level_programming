#include "main.h"

/**
 * jack_bauer - Program entry
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48;  b <= 51; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a / 10 + '0');
					_putchar(b % 10 + '0');
					_putchar(':');
					_putchar(c / 10 + '0');
					_putchar(d % 10 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
