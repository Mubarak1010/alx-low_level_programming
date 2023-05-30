#include "main.h"

/**
 * _atoi - Program entry
 * @s: String
 * Return: numbers in the string
 * 0, if no numbers
 */

int _atoi(char *s)
{
	unsigned long i;
	char *num, *sign;
	int j, k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;

	j = 0;

	while (j <= k)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			if (s[j - 1] == '+' || s[j - 1] == '-')
				*sign = s[j - 1];
			*(num + j) = s[j];
		}
		j++;
	}
	return (*sign + *num);
}
