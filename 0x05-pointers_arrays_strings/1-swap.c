#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: pointer to int a
 * @b: pointer to int b
 * No return value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
