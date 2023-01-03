#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to superstring
 * @accept: pointer to substring
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		if (count > strlen(accept))
			break;
	}
	return (count);
}
