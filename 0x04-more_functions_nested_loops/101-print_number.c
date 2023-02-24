#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
