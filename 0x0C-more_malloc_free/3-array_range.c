#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array of numbers
 * @min: min number
 * @max: max number
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int leng;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	leng = max - min;
	ptr = malloc(sizeof(int) * (leng + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (leng + 1); i++)
		ptr[i] = min++;
	return (ptr);
}
