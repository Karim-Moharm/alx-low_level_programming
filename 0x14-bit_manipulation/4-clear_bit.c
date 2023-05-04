#include "main.h"
/**
  * clear_bit - set the bit to 0
  * @n: pointer to the number
  * @index: index of bit
  * Return: 1 if it worked, or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1 << index);
		return (1);
	}

	return (-1);

}
