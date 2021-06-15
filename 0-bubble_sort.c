#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: Array with the number unsorted
 * @size: The size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	size_t tmp = 0, count;

	if (!array)
		return;

	while (1)
	{
		count = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				print_array(array, size);
			}
			else
				count++;
		}
		if (count == size - 1)
			break;
	}
}
