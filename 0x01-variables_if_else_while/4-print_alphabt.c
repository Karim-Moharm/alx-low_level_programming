
#include <stdio.h>

/**
  * main - main func
  *
  * Return: 0 if sucess
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar (10);
	return (0);
}
