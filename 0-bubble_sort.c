#include "sort.h"

/**
 * swap - swaps integers
 * @first: first integer
 * @second: second integer
 */
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * bubble_sort - sorting algorithm
 * @array: array to be sorted
 * @size: the size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	bool isSort = false;

	if (size < 2 || array == NULL)
		return;
	while (isSort == false)
	{
		isSort = true;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				isSort = false;
			}
		}
	}
}
