#include "main.h"

/**
 * _strstr - locates a substring in a superstring
 * @needle: pointer to substring
 * @haystack: pointer to superstring
 *
 * Return: pointer to the beginning of the located substring in the
 * superstring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				i++;
			else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i - j);
	}
/*	if (haystack[i] == '\0')*/
	return (NULL);
}
