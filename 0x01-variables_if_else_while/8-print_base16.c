#include <stdio.h>
/**
 * main - print all hex numbers and a new line
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char c;

	c = 48;
	while (c < 103)
	{
		if (c < 58)
		{
			putchar(c);
		}
		else if (c > 96)
		{
			putchar(c);
		}
		c++;
	}
	putchar(10);
	return (0);
}
