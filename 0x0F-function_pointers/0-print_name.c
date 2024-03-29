#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name to be used.
 * @f: function pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
