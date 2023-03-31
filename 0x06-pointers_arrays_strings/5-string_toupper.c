#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string
  * to uppercase.
  * @str: string
  * Return: string
  */

char *string_toupper(char *str)
{
	char *tmp = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (tmp);
}
