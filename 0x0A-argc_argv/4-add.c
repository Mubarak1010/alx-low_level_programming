#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Nothing.
 */

int main(int argc, char **argv)
{
	int index;
	unsigned int i, sum = 0;
	char *str;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			str = argv[i];

			for (i = 0; i < strlen(str); i++)
			{
				if (str[i] < 48 || str[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(str);
			str++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
