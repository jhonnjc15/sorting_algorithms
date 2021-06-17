#include "sort.h"

/**
 * partition - function that divide the array in two parts
 * @array: Array with the number unsorted
 * @lo: left index
 * @hi: right index
 * @size: The size of the array
 * Return: Nothing
 */

int partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot, i;
	size_t tmp = 0;
	unsigned int j;

	i = lo;
	pivot = array[hi];
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (array[i] != array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;

				print_array(array, size);
			}
			i = i + 1;
		}
	}
	if (array[i] > array[hi])
	{
		tmp = array[i];
		array[i] = array[hi];
		array[hi] = tmp;

		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_algorithm - recursive function that sorts the numbers.
 * @array: Array with the number unsorted
 * @lo: left index
 * @hi: right index
 * @size: The size of the array
 * Return: Nothing
 */

void quick_sort_algorithm(int *array, size_t lo, size_t hi, size_t size)
{
	size_t p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		if (p > 0 && p > lo)
			quick_sort_algorithm(array, lo, p - 1, size);
		if (p < size - 1)
			quick_sort_algorithm(array, p + 1, hi, size);
	}
}


/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: Array with the number unsorted
 * @size: The size of the array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_algorithm(array, 0, size - 1, size);
}
