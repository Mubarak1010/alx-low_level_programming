#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("\n");
	return (0);
}
