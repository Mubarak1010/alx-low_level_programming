#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: Two dimensional array
 * @size: Size of array
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, l;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
	l = 0;

	for (k = size - 1; k >= 0; k--)
	{
		sum2 += a[l][k];
		l++;
	}
	printf("%d, %d\n", sum1, sum2);
}
