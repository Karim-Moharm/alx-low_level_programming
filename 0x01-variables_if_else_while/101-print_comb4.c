#include <stdio.h>

/**
  * main - main func
  *
  * Return: (0) if sucess
*/

int main(void)
{
	int n1, n2, n3;

	for (n1 = '0'; n1 <= '7'; n1++)
	{
		for (n2 = n1 + 1; n2 <= '8'; n2++)
		{
			for (n3 = n2 + 1; n3 <= '9'; n3++)
			{
				if ((n1 != n2) != n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);

					if (n1 == '7' && n2 == '8' && n3 == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar(10);
	return (0);
}

