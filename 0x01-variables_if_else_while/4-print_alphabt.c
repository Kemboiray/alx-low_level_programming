#include <stdio.h>

/*Print lowercase letters of alphabet*/
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
		if (c != 101 && c != 113)
		putchar(c);
	}
	putchar(10);
	return (0);
}
