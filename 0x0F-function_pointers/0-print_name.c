#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to string to be printed
 * @f: pointer to function defining print format
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
		f(name);
}
