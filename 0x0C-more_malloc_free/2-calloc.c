#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members of array.
 * @size: size of array.
 * Return: a pointer to the allocated memory.
 * •If nmemb or size is 0, then _calloc returns NULL.
 * •If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		return (malloc(nmemb * size));

	return (0);
}
