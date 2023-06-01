#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: String
 * Return: pointer to string
 */

char *cap_string(char *s)
{

	int i = 0;
	while (s[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] ==
