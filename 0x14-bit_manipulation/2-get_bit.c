#include "main.h"

/**
  * get_bit - read the value of particular bit
  * @n: decimal number
  * @index: value of bit
  * Return:  the value of a bit at a given index or -1 if error
  */


int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;
	unsigned int max = 0;

	max = sizeof(unsigned int) * 8;

	if (index > max - 1)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
