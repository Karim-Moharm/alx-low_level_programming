#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for value using jump algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of element in array
 * @value: the value to search for
 * Return: the first index where value is located,
 * If value is not present in array or if array is NULL return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0;
	size_t end = sqrt(size);

	if (!array)
		return (-1);

	while (array[end] <= value && start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
