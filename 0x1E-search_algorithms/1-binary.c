#include <stdio.h>
#include "search_algos.h"

/**
 * print_arr - function used to print an array
 * @array: pointer to first element of the array
 * @left_idx: index of first element in the array
 * @right_idx: index of last element in the array
 *
 * Return: Nothing
 */
void print_arr(int *array, size_t left_idx, size_t right_idx)
{
	size_t i = 0;

	for (i = left_idx; i <= right_idx; i++)
	{
		if (i != left_idx)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right_idx = size - 1;
	size_t left_idx = 0;
	size_t mid_idx = 0;

	if (array)
	{
		while (left_idx <= right_idx)
		{
			printf("Searching in array:");
			print_arr(array, left_idx, right_idx);

			mid_idx = left_idx + ((right_idx - left_idx) / 2);

			if (array[mid_idx] == value)
				return (mid_idx);
			else if (value < array[mid_idx])
				right_idx = mid_idx - 1;
			else
				left_idx = mid_idx + 1;

			size = mid_idx;
		}
	}
	return (-1);
}
