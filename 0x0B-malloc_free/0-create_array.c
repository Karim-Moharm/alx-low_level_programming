#include "main.h"
#include <stdlib.h>
/**
  * create_array- t creates an array of chars.
  * @size: size of array
  * @c: character
  * Return: char
  */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	array = (char *)malloc(size);
	if (array == NULL || size == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	return (array);
	}
}

