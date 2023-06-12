#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Nothing.
 */

int main(int argc, char **argv)
{
	int count;

	count = 0;

	if (argc > 0)
	{
		while (argv[count] != '\0')
			count++;
	}
	printf("%d\n", count);
	return (0);
}
