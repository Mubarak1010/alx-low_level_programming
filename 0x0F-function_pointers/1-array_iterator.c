#include "function_pointers.h"

/**
 * array_iterator - Program entry
 * @array: Array of values
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int index = 0;

	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
