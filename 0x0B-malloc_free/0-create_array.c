#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: character to be printed
 * @size: number of times c is to be printed
 * Return: NULL if size = 0
 * pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
