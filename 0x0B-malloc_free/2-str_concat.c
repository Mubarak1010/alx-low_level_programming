#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 * a newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int index, size1, size2, num, sum = size1 + size2;
	char *s3;

	size1 = 0;
	size2 = 0;
	num = 0;

	if (s1 && s2 == NULL)
		return (NULL);

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	s3 = malloc(sizeof(char) * sum);

	for (index = 0; index < size1; index++)
	{
		s3[index] = s1[index];
	}

	for (index = size1; index < sum; index++)
	{
		s3[size1] = s2[num];
		num++;
	}
	s3[sum] = '\0';

	return (s3);
}
