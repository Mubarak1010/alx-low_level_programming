#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: char that we are checing
 * Return: 1 if letter L or U case, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
