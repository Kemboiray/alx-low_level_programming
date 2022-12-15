#include "main.h"

/**
 * main - print largest of three integers
 * Return: 0 (success)
 */

int main(void)
{
	int a = 972, b = -98, c = 0, largest;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
