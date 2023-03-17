#include <stdio.h>

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	char hex_num = '0';
	char hex_char = 'a';

	while (hex_num <= '9')
	{
		putchar(hex_num);
		hex_num++;
	}

	while (hex_char <= 'f')
	{
		putchar(hex_char);
		hex_char++;
	}
	putchar(10);	/* new line */
	return (0);
}
