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
		for (C = 0; C <= 9; C++)
		{
			P = R * C;
			_putchar(P + '0');
			_putchar(',');

		}
		_putchar('\n');
	}

}
