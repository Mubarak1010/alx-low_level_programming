#include "main.h"
#include <stdio.h>

/**
 * main - fizzbuzz test
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
