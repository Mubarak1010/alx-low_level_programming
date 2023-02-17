#include <stdio.h>

/**
 * main - Printing alphabets in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char al[26] = "abcdefghijklmnopqrstuvwxyz";
	char au[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(al[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(au[i]);
	}
	putchar('\n');
	return (0);
}
