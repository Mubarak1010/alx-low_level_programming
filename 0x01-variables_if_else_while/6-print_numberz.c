#include <stdio.h>

/**
 * main - Printing number from 0 - 9
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%c", i);
	}
	putchar('\n');
	return (0);
}
