#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Array of integers
 * @size: Size of array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int tmp = 0;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
