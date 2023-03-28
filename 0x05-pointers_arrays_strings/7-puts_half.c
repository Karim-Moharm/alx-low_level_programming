#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string
  * Return: void
  */

void puts_half(char *str)
{
	int i, c = 0, n;

	while (str[c] != '\0')
		c++;

	if (c % 2 == 0)
		n = c / 2;

	else
		n = (c + 1) / 2;

	for (i = n; i < c; i++)
		_putchar(str[i]);

	_putchar('\n');


}
