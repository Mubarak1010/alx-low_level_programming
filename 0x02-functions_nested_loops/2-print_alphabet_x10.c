#include "main.h"

/**
 * print_alphabet_x10 - Program entry
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char alp;

	i = 0;

	while (i < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		i++;
		_putchar('\n');
	}
	return (0);
}
