#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: input number
 * Return: 1 if the input integer is a prime number
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else if (n % 2 != 0 && n % 3 != 0)
		return (1);
	else
		return (0);
}
