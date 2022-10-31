#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: int variable passed from calling function
 * No return value
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
	}
	putchar(10);
}
