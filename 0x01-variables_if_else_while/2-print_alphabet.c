#include <stdio.h>

/**
  * main - main func
  *
  * Description: print all alpabrt char
  * Return: 0 if sucess
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;

	}
	putchar(10);
	return (0);
}
