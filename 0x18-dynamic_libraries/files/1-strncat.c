#include "main.h"

/**
 * _strncat - concatenates two strings, overwriting the terminating null byte
 * of the first string.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, jmax;

	for (i = 0; dest[i]; i++)
		;
	for (jmax = 0; src[jmax]; jmax++)
		;
	if (n <= jmax)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
		if (n < jmax)
			dest[i] = '\0';
	}
	else
	{
		for (j = 0; src[j]; j++)
		{
			dest[i] = src[j];
			i++;
		}
		dest[i] = src[j];
	}
	return (dest);
}
