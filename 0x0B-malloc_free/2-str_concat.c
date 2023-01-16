#include "2-strlen.c"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to memory location containing the concatenation (success),
 * or NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *p;

	if (s1 != NULL && s2 != NULL)
	{
		p = malloc(_strlen(s1) + _strlen(s2) + 1);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; s2[j]; i++, j++)
		{
			p[i] = s2[j];
		}
		p[i] = 0;
		return (p);
	}
	if (s1 == NULL && s2 != NULL)
	{
		p = malloc(_strlen(s2) + 1);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; s2[i]; i++)
			p[i] = s2[i];
		p[i] = 0;
		return (p);
	}
	if (s1 != NULL && s2 == NULL)
	{
		p = malloc(_strlen(s1) + 1);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; s1[i]; i++)
			p[i] = s1[i];
		p[i] = 0;
		return (p);
	}
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	return (NULL);
}
