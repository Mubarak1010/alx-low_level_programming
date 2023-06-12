#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
