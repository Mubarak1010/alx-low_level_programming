#include "main.h"

/**
 * print_array - Program entry
 * @a: array of integers
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
