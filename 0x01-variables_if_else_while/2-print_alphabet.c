#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
