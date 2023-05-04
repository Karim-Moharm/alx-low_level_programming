#include "main.h"

/**
  * binary_to_uint - convert binary to decimal
  * @b: binary number
  * Return: the decimal number or 0 if fails
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i;
	unsigned int result = 0;
	unsigned int decimal = 1;

	while (b[len])
	{
		len++;
	}
	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += decimal;
		decimal *= 2;
	}
	return (result);
}
