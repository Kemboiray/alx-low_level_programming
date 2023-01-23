#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string separating numbers
 * @n: number of integers passed to the function
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else/* if (separator == NULL)*/
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}

