#include "main.h"

/**
 * swap_int - Program entry
 * @a: first number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
