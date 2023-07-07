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
	int len = 0, i, j, k;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	i = len - 1;
	k = i;

	for (j = 0; j <= i; j++)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);

		if (b[j] == '1')
		{
			value += my_power(2, k);
		}
		else if (b[j] == '0')
		{
			value += 0;
		}
		k--;
	}
	return (value);
}

/**
 * _power - gives the power of a number
 * @num: the number
 * @n: the power
 * Return: num raised to the power of n
 */

unsigned int my_power(unsigned int num, int n)
{
	unsigned int power = 1;
	int i = 1;

	if (n == 0)
		return (power);

	while (i <= n)
	{
		power *= num;
	}
	return (power);
}
