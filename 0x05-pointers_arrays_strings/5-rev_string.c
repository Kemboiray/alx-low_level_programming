#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string constant
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;

	for (i = 0; s[i]; i++)
		;
	for (j = (i - 1), k = 0; j >= 0; j--, k++)
		s[k] = s[j];
	s[k] = '\0';
}
