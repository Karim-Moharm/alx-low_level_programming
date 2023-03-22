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
	int n1;
	int n2;

	for (R = 0; R <= 9; R++)
	{
		for (C = 0; C <= 9; C++)
		{
			P = R * C;
			if ((P / 10) == 0)
			{
				_putchar(P + '0');

				if (C != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				n1 = P / 10;
				n2 = P % 10;
				_putchar(n1 + '0');
				_putchar(n2 + '0');

				if (C != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

}
