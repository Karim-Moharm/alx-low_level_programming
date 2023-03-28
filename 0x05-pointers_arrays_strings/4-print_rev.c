#include "main.h"

/**
  * print_rev - print string in reverse
  * @s: pointer to char
  * Return: void
  */

void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;  /* count length of string */

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
