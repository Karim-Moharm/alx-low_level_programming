#include <stdio.h>

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

