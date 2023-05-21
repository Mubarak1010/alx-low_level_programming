#include <stdio.h>

/**
 * main - Pragram entry
 * Return: 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}
