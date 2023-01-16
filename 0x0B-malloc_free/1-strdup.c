#include "2-strlen.c"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: pointer to string to be duplicated
 *
 * Return: pointer equivalent to @str (success), or NUll (failure).
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	p = malloc((_strlen(str) + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
			p[i] = str[i];
		p[i] = 0;
	}

	return (p);
}

