#include <stdio.h>

/*Print lowercase letters of alphabet in reverse*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 122; c > 96; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
