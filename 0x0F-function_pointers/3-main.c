#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;
	int calc = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calc);

	return (0);
}
