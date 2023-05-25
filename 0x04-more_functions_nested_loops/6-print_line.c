#include "main.h"

/**
 * print_line - Program entry
 * @n: number to use
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
