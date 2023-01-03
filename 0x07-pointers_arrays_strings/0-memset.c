#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to buffer
 * @b: byte with which to fill memory
 * @n: number of bytes in memory to fill
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
