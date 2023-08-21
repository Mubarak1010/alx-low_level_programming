#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character to the stdout
 * @c: the character to be written
 *
 * Return: on sucess 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
