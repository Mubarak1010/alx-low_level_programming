#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: first number
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
		{
			printf("%d", va_arg(num, int));
			printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(num, int));
		}
	}
	va_end(num);

	printf("\n");
}
