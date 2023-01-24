#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void.
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, size = 0;
	char *str;
	char *sep = ", ";
	va_list args;

	while (format && format[size])
		size++;

	va_start(args, format);
	while (format && format[i])
	{
		if (i == size - 1)
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
