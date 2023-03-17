#include <stdio.h>

/**
  * main - main func
  *
  * Return: 0 if sucess
*/

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar(10);  /* used to print new line */
	return (0);
}
