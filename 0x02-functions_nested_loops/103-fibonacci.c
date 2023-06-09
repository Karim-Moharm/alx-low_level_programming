#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

long unsigned int fibonacci(void);

int main(void)
{
	fibonacci();
	return (0);
}

/**
  * fibonacci -  finds and prints the sum of the even-valued terms in fib series
  *
  * Return: sum
  */

long unsigned int fibonacci(void)
{
	int n;
	long f1 = 1, f2 = 0;
	long f;

	for (n = 1; n <= 10; n++)
	{
		f = f1 + f2;
		printf("%ld, ", f);
	}
	return f;
}
