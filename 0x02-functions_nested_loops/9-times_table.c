#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0.
  *
  * Return: void
  */

void times_table(void)
{
	int R; /* row */
	int C; /* coulmn*/
	int P; /* product */

	for (R = 0; R <= 9; R++)
	{
		_putchar('0');
		for (C = 1; C <= 9; C++)
		{
			_putchar(',');
			_putchar(' ');
			P = R * C;

			if (P <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((P / 10) + '0');
			_putchar((P % 10) + '0');
		}
		_putchar('\n');
	}
}
