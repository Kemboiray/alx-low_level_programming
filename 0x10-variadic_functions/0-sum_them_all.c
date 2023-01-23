#include "variadic_functions.h"

/**
 * sum_them_all - sums all but the first argument passed
 * @n: argument counr
 *
 * Return: sum, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
