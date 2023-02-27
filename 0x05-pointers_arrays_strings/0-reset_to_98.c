#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer to comsider
 */

void reset_to_98(int *n)
{
	int a = 98;
	*n = &a;
	_putchar(a + '0');
	_putchar('\n');
}
