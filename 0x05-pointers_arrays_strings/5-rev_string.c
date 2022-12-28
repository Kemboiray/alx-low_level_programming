#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string constant
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, l;
	char *t;

	for (i = 0; s[i]; i++)
		;
	l = i;
	for (j = (i - 1), k = 0; j >= 0; j--, k++)
		t[k] = s[j];
	t[k] = '\0';
	for ( i = 0; i < l; i++)
		s[i] = t[i];
	s[i] = '\0';
}
