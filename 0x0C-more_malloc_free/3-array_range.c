#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: INT_MIN
 * @max: INT_MAX
 * Return: the pointer to the newly created array.
 * •If min > max, return NULL
 * •If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *my_array;

	if (min > max)
		return (NULL);
	if (my_array == NULL)
		return (NULL);

	my_array = malloc(INT_MAX);

}
