#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string separating numbers
 * @n: number of sting pointers passed to the function
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			str = va_arg(ap, char *);
			printf("%s%s", str == NULL ? "(nil)" : str, separator);
		}
		else/* if (separator == NULL)*/
		{
			str = va_arg(ap, char *);
			printf("%s", str == NULL ? "(nil)" : str);
		}
	}
	va_end(ap);
	printf("\n");
}
