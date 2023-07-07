#include "main.h"

unsigned int my_power(unsigned int num, int n);

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of value
 * Return: the converted number, or 0 if
 * ◦there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
