#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
