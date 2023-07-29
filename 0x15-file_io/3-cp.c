#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}

/**
 * _copy - copies a file to another file
 * @file_to: File to
 * @file_from: file from
 *
 * Return:
