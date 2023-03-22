#include "main.h"

/**
  * print_last_digit -  a function that prints the last digit of a number.
  * @n: int number
  *
  * Return: last digit of a num
  */

int print_last_digit(int n)
{
	int c;

	if (n < 0)
		c = -1 * (n % 10);
	else
		c = n % 10;
	_putchar(c + '0');
	return (c);

}
