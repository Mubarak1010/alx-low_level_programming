#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');

	return (0);
}
