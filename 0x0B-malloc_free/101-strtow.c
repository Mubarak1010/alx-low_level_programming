#include "main.h"
#include <stdlib.h>

int word_len(char *s);
int word_count(char *s);
char **strtow(char *str);

/**
 * word_len - program entry
 * @s: string to be used
 * Return: index pointing to the end of curren word
 */

int word_len(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * word_count - program entry
 * @s: string to be used
 * Return: the number of words
 */

int word_count(cahr *s)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(s + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(s + i) != ' ')
		{
			words++;
			i += word_len(s + i);
		}
	}
	return (words);
}

/**
 * strtow - function that splits a string into words.
 * @str: string to be used
 * Return: NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, words = 0, letters, l, w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);

			free(s);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];

		s[w][l] = '\0';
	}
	s[w] = NULL;

	return (s);
}
