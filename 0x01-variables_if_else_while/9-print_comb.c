#include <stdio.h>
/**
* main - Print single digit numbers in ascending order
* Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}
	return (0);
}
