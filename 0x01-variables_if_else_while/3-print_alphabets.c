#include <stdio.h>

/*Print lower and then upper case letters of alphabet*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}

	for (c = 65; c < 91; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
