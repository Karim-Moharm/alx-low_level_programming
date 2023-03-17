#include <stdio.h>

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	puts(""); /* puts can be used like that to print new line */
	return (0);
}
