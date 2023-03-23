#include "main.h"
/**
  * _isdigit -  checks for a digit
  * @c: number
  * Return: 1 if c is digit and 0 otherwise
  */

int _isdigit(int c)
{
	int isdigit = 0;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
