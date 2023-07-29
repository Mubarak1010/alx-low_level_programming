#include "main.h"

/**
 * flip_bits - number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bit changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = j >> i;
		if (curr & 1)
			count++;
	}
	return (count);
}
