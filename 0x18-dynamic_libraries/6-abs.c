#include "main.h"
# include <stdlib.h>

/**
  * _abs -  computes the absolute value of an integer.
  * @n: number to get its abs
  *
  * Return: the absolute value
  */
int _abs(int n)
{
	/* return (abs(n)); */
	if (n < 0)
		return (n * -1);
	return (n);

}

