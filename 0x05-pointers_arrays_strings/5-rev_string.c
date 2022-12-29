#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: string constant
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, tmp, first, last;

	len = _strlen(s);
	first = 0;
	last = len - 1;

	while (first < last)
	{
		tmp = s[first];
		s[first] = s[last];
		s[last] = tmp;
		first++;
		last--;
	}
}
