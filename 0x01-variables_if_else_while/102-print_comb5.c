#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 49; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);

					if (ij == kl)
					{
						++l;
						putchar(l);
					}
					else
						putchar(l);

					if (j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
