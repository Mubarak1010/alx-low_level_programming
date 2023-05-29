#include "main.h"

/**
 * _atoi - Program entry
 * @s: String in consideration
 * Return: number, if there's number
 * if there's no number, return 0
 */

int _atoi(char *s)
{
	unsigned int i;
	char num, sign;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '+' || s[i - 1] == '-')
			{
				sign = s[i - 1];
			}
			num = s[i];
			return (sign + num);
		}
		i++;
	}
	return (0);
}
