#include "variadic_functions.h"

/**
 * sum_them_all - add all the numbers
 * @n: ammount of numbers
 * Return: sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

