#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: Array with the number unsorted
 * @size: The size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i;
	size_t tmp = 0;
	size_t index;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;

			print_array(array, size);
		}
	}
}
