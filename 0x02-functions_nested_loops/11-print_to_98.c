#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Program entry
 * @n: number to check
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
		n--;
	}
	printf("98");
}
