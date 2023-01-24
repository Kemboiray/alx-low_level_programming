#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked by
 * the user
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator given as a
 * parameter, or NULL (s) does not match any expected operator).
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/*
	*if (strlen(s) != 1)
	*{
	*	printf("Error\n");
	*	exit(99);
	*}
	*/
	while (i < 5 && strlen(s) == 1)
	{
		if (*s == *(ops[i]).op)
		{
			/*printf("ops[%d].op = %s\n", i, ops[i].op);*/
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
