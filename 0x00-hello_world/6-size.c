#include <stdio.h>

/**
  * main - main func
  *
  * Description: prints size of datatypes
  *
  * Return: Always 0 is succedded
*/

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)", sizeof(float));
	return (0);
}
