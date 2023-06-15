#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: character to be printed
 * Return: On success 1.
 * On failure -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
