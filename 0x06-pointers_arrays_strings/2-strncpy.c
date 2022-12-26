#include "main.h"

/**
 * _strncpy - works exactly like strncpy
 * @dest: pointer to destination buffer
 * @src: pointer to source
 * @n: number of bytes to copy to destination buffer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
