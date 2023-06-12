#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc, char **argv)
{
	long num1, num2;

	num1 = (long) argv[1];
	num2 = (long) argv[2];

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%ld\n", num1 * num2);
	}
	return (0);
}
