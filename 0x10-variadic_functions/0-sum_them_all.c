#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first argument
 * Return: the sum of all its parameters
 * •If n == 0, 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	else
	{
		va_list num;
		unsigned int i, sum;

		sum = 0;

		va_start(num, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(num, int);
		}

		va_end(num);
		return (sum);
	}
}
