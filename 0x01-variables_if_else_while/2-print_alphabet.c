#include <stdio.h>
/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	int i;

	char alp[26] = {a, b, c, d, e, f, g, h, i, j, k, l,
		m, n, o, p, q, r, s, t, u, v, w, x, y, z};

	for (i = 0; i <= 26; i++)
		putchar('alp[i]');
	putchar('\n');

	return (0);
}
