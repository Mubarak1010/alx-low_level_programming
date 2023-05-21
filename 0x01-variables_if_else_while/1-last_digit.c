#include <stdlib.h>
#include <time.h>
/* more headers goes ther */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of n is: %d",  n);

	if (n > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is 0");
	else if (n < 6 && n != 0)
		printf("and is less 6 and not 0");
	printf("\n");

	return (0);
}
