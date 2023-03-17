#include <stdio.h>

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	char rev_char = 'z';

	while (rev_char >= 'a')
	{
		putchar(rev_char);
		rev_char--;
	}
	putchar('\n');
	return (0);
}
