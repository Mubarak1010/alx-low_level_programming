#include "main.h"

int _sqt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to be used.
 * Return: Square root of a number.
 */


int _sqrt_recursion(int n)
{
	return (_sqt(n, 1));
}

/**
 * _sqt - outputs the squarre root of n
 * @n: Number to be used
 * @i: numbers to iterate with
 * Return: natural square root
 */

int _sqt(int n, int i)
{
	int sqt = i * i;

	if (sqt > n)
		return (-1);
	if (sqt == n)
		return (i);
	if (sqt < n)
		return (_sqt(n, i + 1));
}
