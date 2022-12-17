#include <stdio.h>

/**
 * main - print 1 to 100 with exceptions:
 *      - for multiples of 3 only, print "Fizz"
 *      - for multiples of 5 only, print "Buzz"
 *      - for multiples of both 3 and 5, print "FizzBuzz"
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
			printf("Fizz ");
		else if (((i % 3) != 0) && ((i % 5) == 0))
			printf("Buzz ");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
