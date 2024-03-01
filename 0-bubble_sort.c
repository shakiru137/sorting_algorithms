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
	size_t i, j;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
		print_array(array, size);
	}
}
