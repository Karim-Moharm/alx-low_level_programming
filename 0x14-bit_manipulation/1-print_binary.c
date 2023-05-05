#include "main.h"

/**
  * print_binary - convert decimal to binary
  * @n: decimal value
  * Return: void
  */

void print_binary(unsigned long int n)
{
	int max = sizeof(unsigned long int) * 8;
	int bit;
	int i;

	for (i = 0; i < max; i++)
	{
		bit = (n >> max) & 1;
		_putchar(bit ? '1' : '0');
		n <<= 1;
	}
}
