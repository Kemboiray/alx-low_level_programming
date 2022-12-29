#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: ponter to string to be manipulated
 *
 * Return: str.
 */
char *cap_string(char *s)
{
	int i, j;

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	for (i = 1; str[i]; i++)
	{
		j = i + 1;
		if ((s[i] == 32 || s[i] == 9 || s[i] == 11 || s[i] == 10 ||
				s[i] == 44 || s[i] == 59 || s[i] == 46 ||
				s[i] == 33 || s[i] == 63 || s[i] == 34 ||
				s[i] == 40 || s[i] == 41 || s[i] == 123 ||
				s[i] == 125) && (s[j] != 32 && s[j] != 9 &&
				s[j] != 11 && s[j] != 10 && s[j] != 44 &&
				s[j] != 59 && s[j] != 46 && s[j] != 33 &&
				s[j] != 63 && s[j] != 34 && s[j] != 40 &&
				s[j] != 41 && s[j] != 123 && s[j] != 125))
		{
			if (s[j] > 96 && s[j] < 123)
				s[j] -= 32;
		}
	}
}
			
