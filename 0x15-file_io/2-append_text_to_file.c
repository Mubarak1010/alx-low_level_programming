#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: File name
 * @text_content: Text content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int i = 0;

	file = fopen(filename, "a");

	if (file != NULL)
	{
		if (text_content == NULL)
		{
			return (1);
		}
		else
		{
			while (text_content[i] != '\0')
			{
				putc(text_content[i], file);
				i++;
			}
		}
		fclose(file);
	}
	else
	{
		return (-1);
	}
	return (1);
}
