#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 * @n: number we are checking
 * Return: 1 if n is > 1, 0 if n = 0, -1 if n < 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
