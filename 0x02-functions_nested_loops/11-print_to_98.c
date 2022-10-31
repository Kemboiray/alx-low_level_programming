#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: int variable passed from calling function
 * No return value
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	putchar('9');
	putchar('8');
	putchar(10);
}
