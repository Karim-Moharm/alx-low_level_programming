#include "main.h"

/**
  * swap_int - swap two integers
  * @a: first pointer to int
  * @b: second pointer to int
  * Return: void
  */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
