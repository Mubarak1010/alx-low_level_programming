#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if number is positive, negative of zero
 * Return: Always 0
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num == 0)
	{
		printf("%d is zero\n", num);
	}
	else if (num < 0)
	{
		printf("%d is negative\n", num);
	}
	return (0);
}
