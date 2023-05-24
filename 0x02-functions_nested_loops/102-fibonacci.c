#include <stdio.h>

/**
 * main - Program entry
 * Return: 0
 */

int main(void)
{
	int i, fNum, lNum, temp;

	fNum = 1;
	lNum = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%d", fNum);
		temp = fNum + lNum;
		fNum = lNum;
		lNum = temp;

		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
