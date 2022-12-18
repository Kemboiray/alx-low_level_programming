#include "main.h"

/**
 * print_triangle - print right isosceles triangle in terminal
 * @size: size (base and depth) of triangle
 * Return: void
 */
 
void print_triangle(int size)
{
	int count, space, hash;
	
	if (size>0)
	{
		for (count=0; count<=size; count++)
		{
			for (space=0; space<=(size-count); space++)
			{
				_putchar(' ');
			}
			for (hash=0; hash<=(size-space); hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	
	else
	{
		_putchar('\n');
	}
}
