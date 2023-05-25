#include "main.h"

/**
 * print_diagonal - Program entry
 * @n: number to use
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');

			_putchar('\n');
			if (n > 1)
			{
				for (j = 1; j < n; j++)
				{
					for (k = 1; k <= j; k++)
					{
						_putchar(' ');
					}
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
