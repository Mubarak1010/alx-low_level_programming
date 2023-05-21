#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	unsigned int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
