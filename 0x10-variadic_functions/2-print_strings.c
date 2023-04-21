#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: " ,"
 * @n: ammount of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *st;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(ap, char *);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
