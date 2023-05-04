#include "main.h"

/**
  * flip_bits - toggle bit
  * @n: number1
  * @m: number2
  * Return:  number of bits you would need to flip
  * to get from one number to another.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor;

	xor = n ^ m;
	while (xor)
	{
		count = count + (xor & 1);
		xor = xor >> 1;
	}
	return (count);
}

