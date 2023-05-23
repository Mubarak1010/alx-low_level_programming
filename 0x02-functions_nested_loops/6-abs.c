#include "main.h"

/**
 * _abs - Program entry
 * @n: number to check
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	if (n < 0)
	{
		int a;

		a = -n;
		return (a);
	}
}
