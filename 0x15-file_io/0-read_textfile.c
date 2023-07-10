#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: File name
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 * 0 ---
 * If the file can not be opened or read,
 * If filename is NULL,
 * If write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;

	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file != NULL)
	{
		char c;

		while ((c = fgetc(file)) != EOF && letters > 0)
		{
			printf("%c", c);
			count++;
			letters--;
		}
		fclose(file);
	}
	else
	{
		return (0);
	}
	return (count);
}
