#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: File name
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 * 0 ---
 * If the file can not be opened or read,
 * If filename is NULL,
 * If write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;

	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp != NULL)
	{
		char ch;

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fp);
	}
	else
	{
		return (0);
	}
	return (count);
}
