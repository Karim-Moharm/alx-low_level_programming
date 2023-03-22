#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int Hour;
	int Min;

	for (Hour = 0; Hour < 24; Hour++)
	{
		for (Min = 0; Min < 60; Min++)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour % 10) + '0');
			_putchar(':');
			_putchar((Min / 10) + '0');
			_putchar((Min % 10) + '0');
			_putchar('\n');
		}
	}

}
