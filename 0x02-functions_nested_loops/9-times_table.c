#include "main.h"
#include <stdio.h>

/**
 * times_table - Program entry
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k;

			k = i * j;
			printf("%d, ", k);
			printf(" ");
		}
		printf("\n");
	}
}
