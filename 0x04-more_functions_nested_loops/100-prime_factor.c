#include <stdio.h>
#include "main.h"

/**
 * main -  prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long x, max;
	long n = 612852475143;
	double s = sqrt(n);

	for (x = 1; x <= s; x++)
	{
		if (n % x == 0)
		{
			max = n / x;
		}
	}
	printf("%ld\n", max);
	return (0);
}
