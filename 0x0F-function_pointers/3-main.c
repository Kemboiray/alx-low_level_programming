#include "3-calc.h"
/**
 * main - run program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success).
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", function(num1, num2));
	exit(EXIT_SUCCESS);
}
