#include "main.h"

/**
 * print_last_digit - Program entry
 * @n: number to check
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n >= -9 && n <= 9)
		return (n);
	if (n < -9 || n > 9)
	{
		int a;

		a = n % 10;
		return (a);
	}
	return (0);
}
