#include <stdlib.h>
#include "2-strlen.c"

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use fron s2
 *
 * Return: pointer to s1 (success), NULL (failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, size;
	char *p = malloc((_strlen(s1) + n + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	size = i + n;
	for (j = 0; (i < size) && s2[j]; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}
