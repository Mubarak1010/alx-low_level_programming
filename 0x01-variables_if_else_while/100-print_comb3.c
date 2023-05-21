#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		putchar(i);
		for (j = i + 1; j <= 56; j++)
		{
			putchar(j);
			for (k = i + 2; k <= 57; k++)
			{
				putchar(k);
				if (i != 55 && j != 56 && k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
