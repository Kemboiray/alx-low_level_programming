int _putchar(char c);

/**
 * print_alphabet - print the alphabet, in lowercase, followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
}
