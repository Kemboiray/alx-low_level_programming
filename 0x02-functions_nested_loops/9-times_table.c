#include <stdio.h>
#include "main.h"
/**
 * times_table - print the 9 times-table, from 0
 * No arguments
 * No return value
 */
void times_table(void)
{
	int i, j, ij;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ij = i * j;
			if (j == 0)
			{
				printf("%d, ", ij);
			}
			else if (j != 9)
			{
				printf("%2d, ", ij);
			}
			else
			{
				printf("%2d", ij);
			}
		}
		printf("\n");
	}
}
