#include "main.h"

/**
 * main - Program that prints its name, followed by a new line.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Nothing.
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
