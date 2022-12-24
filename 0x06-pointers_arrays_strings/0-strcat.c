#include "main.h"

/**
 * _strcat - concatenates two strings, overwriting the terminating null byte of
 * the first string.
 * @dest: first string
 * @src: second string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
