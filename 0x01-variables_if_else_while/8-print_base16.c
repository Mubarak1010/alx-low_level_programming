#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	char alp;

	for (alp = '1'; alp < '10'; alp++)
		putchar(alp);
	for (alp = 'a'; alp < 'g'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
