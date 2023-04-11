#include <stdio.h>
#include <stdlib.h>
/**
  * main- main function
  * @argc: argument count
  * @argv: argument vector
  * Return:always 0
  */

int main(int argc, char *argv[])
{
	int add = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}	
