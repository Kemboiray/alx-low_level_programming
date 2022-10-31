#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * No argument
 * No return value
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10 && m < 10)
			{
				printf("0%d:0%d\n", h, m);
			}
			else if (h < 10 && m >= 10)
			{
				printf("0%d:%d\n", h, m);
			}
			else if (h >= 10 && m < 10)
			{
				printf("%d:0%d\n", h, m);
			}
			else
			{
				printf("%d:%d\n", h, m);
			}
		}
	}
}
