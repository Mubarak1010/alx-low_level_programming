#include "main.h"

/**
 * _atoi - Program entry
 * @s: String
 * Return: numbers in the string
 * 0, if otherwise
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int i = 0;
	int min = 1;
	int j = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			j = 1;
			i = (i * 10) + (s[a] - '0');
			a++;
		}
		if (j == 1)
		{
			break;
		}
		a++;
	}
	i *= min;
	return (i);
}
