#include <stdio.h>

/*Reset function*/
void reset_to_98(int *n)
{
	*n = 98;
} /*Reset function*/

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("Initial value of 'n': %d\n", n);
	reset_to_98(p); /*Calling function to reset n to 98 */
	printf("Updated value of 'n': %d\n", n);
	return (0);
}
