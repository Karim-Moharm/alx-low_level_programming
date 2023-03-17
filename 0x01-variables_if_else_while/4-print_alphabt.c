
#include <stdio.h>

/**
  * main - main func
  *
  * Return: 0 if sucess
*/

int main(void)
{
	char alpha = 'a';

	for (alpha; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar (10);
	return (0);
}
