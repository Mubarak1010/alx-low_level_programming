#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of values
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: •If size <= 0 and •If no element matches, -1.
 * index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);
	else
	{
		while (index < size)
		{
			if (cmp(array[index]))
				

