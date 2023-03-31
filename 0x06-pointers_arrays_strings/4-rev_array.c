#include "main.h"

/**
  * reverse_array - unction that reverses the content of an array of integers.
  * @a: pointer to integer
  * @n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		i++;
		n--;
	}
}
