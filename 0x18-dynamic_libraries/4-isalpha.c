#include <stdio.h>
#include "main.h"

/**
  * _isalpha -  checks for alphabetic character.
  * @c: paramter to check if is upper or not
  *
  * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
  */
int _isalpha(int c)
{
	int check = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		check = 1;

	return  (check);
}
