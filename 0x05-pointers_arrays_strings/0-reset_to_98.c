#include "main.h"
#include <stdio.h>

/* Update function - update param to 98*/

void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("Initial value of 'n': %d\n", n);
	reset_to_98(p);
	printf("Updated value of 'n': %d\n", n);
	return (0);
}
