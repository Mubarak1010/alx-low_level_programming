#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf ("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");
	return (0);
}
