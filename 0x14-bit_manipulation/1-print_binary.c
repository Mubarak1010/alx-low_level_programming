#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int j;

	for (index = 63; index >= 0; index--)
	{
		j = n >> index;

		if (j & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
