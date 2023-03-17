#include <stdio.h>

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	char char_num;

	for (char_num = '0'; char_num <= '9'; char_num++)
	{
		putchar(char_num);
	}
	putchar(10);
	return (0);
}
