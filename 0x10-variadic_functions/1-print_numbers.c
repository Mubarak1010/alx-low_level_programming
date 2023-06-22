#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: first number
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list num;

	va_start(num, n);


