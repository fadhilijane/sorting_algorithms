#include "sort.h"

/**
 * swap - swaps two integers
 * @first: the first integer
 * @second: the second integer
 */

void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * selection_sort - sort array in ascending order
 * @array: the arrary to be sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, key;

	if (size < 2 || array == NULL)
		return;
	for  (i = 0; i < size - 1; i++)
	{
		key = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[key])
				key = j;
		}
		if (i != key)
		{
			swap(array + i, array + key);
			print_array(array, size);
		}
	}
}
