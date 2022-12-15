#include "main.h"

/**
 * main - check 1-isdigit.c
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
