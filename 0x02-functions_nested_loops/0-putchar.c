#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


