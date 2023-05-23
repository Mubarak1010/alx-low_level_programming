#include "main.h"

/**
 * print_last_digit - Program entry
 * @n: number to check
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
		return (n % 10);
	}
	if (n < 0)
	{
		int a;

		a = -n;
		return (a % 10);
	}
	return (0);
}
