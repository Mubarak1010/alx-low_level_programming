#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file.
 * @filename: File name
 * @text_content: Text content
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;

	int i = 0;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");

	if (file != NULL)
	{
		if (text_content == NULL)
			return (1);

		while (text_content[i] != '\0')
		{
			putc(text_content[i], file);
			i++;
		}
		fclose(file);
	}
	else
	{
		return (-1);
	}
	return (1);
}
