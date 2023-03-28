#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *rev_string - reverse a string
  * @s: string
  * Return: void
  */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
