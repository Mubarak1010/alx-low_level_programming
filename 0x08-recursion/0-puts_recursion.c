#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: String to be printed
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	int index, i;

	index = 0;

	while (s[index] != '\0')
		index++;

	i = 0;

	while (i < index)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
