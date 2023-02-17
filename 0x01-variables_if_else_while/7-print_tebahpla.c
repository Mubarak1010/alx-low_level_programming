#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

int i;

for (i = 25; i >= 0; i--)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
