#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void.
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			case 'f':
				printf("%f, ", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				if (!(str))
					printf("(nil)");
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}