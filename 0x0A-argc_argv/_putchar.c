#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 * Return: On success 1.
 * On failure -1, and errno to be set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
