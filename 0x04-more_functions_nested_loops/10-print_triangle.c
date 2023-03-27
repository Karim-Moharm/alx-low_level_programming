#include "main.h"

/**
 * print_triangle -  a function that prints a triangle
 * @size: An input integer
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i + j < size-1)
					_putchar(' ');
				else 
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
