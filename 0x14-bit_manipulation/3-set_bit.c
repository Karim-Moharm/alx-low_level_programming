#include "main.h"

/**
  * set_bit - set the bit to 1
  * @n: pointer to the numer
  * @index: index of bits
  * Return: 1 if it worked, or -1 if an error occurred
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = sizeof(unsigned int) * 8;

	if (index > max - 1)
		return (-1);
	*n |= (1 << index);
	return (1);
}
