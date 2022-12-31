#include "main.h"

/**
 * leet - encode a string to 1337
 * @s: pointer to string
 *
 * Return: s.
 */
char *leet(char *s)
{
	int i, j;
	char arr1[] = {65, 69, 79, 84, 76, 97, 101, 111, 116, 108};
	char arr2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == arr1[j])
				s[i] = arr2[j];
		}
	}
	return (s);
}
