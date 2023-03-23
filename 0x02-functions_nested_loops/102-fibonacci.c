#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void fibonacci(void);

int main(void)
{
	fibonacci();
	return (0);
}

/**
  * fibonacci -  prints the first 50 Fibonacci numbers
  * Return: void
  */

void fibonacci(void)
{
	int n;
	long f1 = 0;
	long f2 = 1;
	long f;

	for (n = 50; n >= 1; n--)
	{
		f = f1 + f2;
		if (n == 1)
			printf("%ld\n", f);
		else
			printf("%ld, ", f);
		f1 = f2;
		f2 = f;
	}
}
