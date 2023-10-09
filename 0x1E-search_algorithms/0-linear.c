#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for value in array using iterative linear search
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
